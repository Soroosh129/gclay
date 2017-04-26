#include <stdio.h>
#include <sys/time.h>

int cuda_test_memcpy(unsigned int size);
int cuda_test_memcpy_normal(unsigned int size);

static inline void tvsub(struct timeval *x,
                                                 struct timeval *y,
                                                 struct timeval *ret)
{
        ret->tv_sec = x->tv_sec - y->tv_sec;
        ret->tv_usec = x->tv_usec - y->tv_usec;
        if (ret->tv_usec < 0) {
                ret->tv_sec--;
                ret->tv_usec += 1000000;
        }
}



int main(int argc, char *argv[])
{
	unsigned int size = 0x10000000; /* 256MB */

        struct timeval tv;
        float total;
        struct timeval tv_total_start, tv_total_end;

        gettimeofday(&tv_total_start, NULL);



	if (argc > 1)
		sscanf(argv[1], "%x", &size);

	if (cuda_test_memcpy_normal(size) < 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");
	if (cuda_test_memcpy_normal(size) < 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");

        gettimeofday(&tv_total_end, NULL);
        tvsub(&tv_total_end, &tv_total_start, &tv);
        total = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

        printf("Total of the normal program is: %f\n", total);


        gettimeofday(&tv_total_start, NULL);
	if (cuda_test_memcpy(size) < 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");
	if (cuda_test_memcpy(size) < 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");

        gettimeofday(&tv_total_end, NULL);
        tvsub(&tv_total_end, &tv_total_start, &tv);
        total = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

        printf("Total of the enhanced program is: %f\n", total);


	return 0;
}
