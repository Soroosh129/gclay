#include <stdio.h>
#include <sys/time.h>

int cuda_test_mmul(unsigned int n, char *path);
int cuda_test_mmul_normal(unsigned int n, char *path);

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
	unsigned int n = 3;

	if (argc > 1)
		n = atoi(argv[1]);

        struct timeval tv;
        float total;
        struct timeval tv_total_start, tv_total_end;

        gettimeofday(&tv_total_start, NULL);


	int rc = cuda_test_mmul_normal(n, ".");
	if ( rc != 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");



	if (argc > 1)
		n = atoi(argv[1]);

	rc = cuda_test_mmul_normal(n, ".");
	if ( rc != 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");

        gettimeofday(&tv_total_end, NULL);
        tvsub(&tv_total_end, &tv_total_start, &tv);
        total = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

        printf("Total of the normal program is: %f\n", total);

        gettimeofday(&tv_total_start, NULL);


	rc = cuda_test_mmul(n, ".");
	if ( rc != 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");



	if (argc > 1)
		n = atoi(argv[1]);

	rc = cuda_test_mmul(n, ".");
	if ( rc != 0)
		printf("Test failed\n");
	else
		printf("Test passed\n");

        gettimeofday(&tv_total_end, NULL);
        tvsub(&tv_total_end, &tv_total_start, &tv);
        total = tv.tv_sec * 1000.0 + (float) tv.tv_usec / 1000.0;

        printf("Total of the enhanced program is: %f\n", total);


	return rc;

}
