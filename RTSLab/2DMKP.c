/* From https://gist.github.com/TheRayTracer/4375786 */


#include <stdlib.h>
#include <stdio.h>
#include "2DMKP.h"

#define max(a,b) ((a>b)?a:b)

struct item
{
   int value;
   int weight;
};


int knapsack_2d(struct item *store, const int capacity , int size)
{
	int n = size;
   const int W = capacity + 1;
   int **T;
   int i=0;
   int j=0;
   T = (int **)malloc(n*sizeof(int));
   for (i=0; i< n; i++)
   {
	   T[i] = (int *)malloc(W*sizeof(int));
   }

   for (i = 0; i < W; T[0][i] = 0, ++i);

   for (i = 0; i < n; ++i)
   {
      for (j = 0; j < W; ++j)
      {
         if (j >= store[i].weight)
         {
            T[i + 1][j] = max(T[i][j], T[i][j - store[i].weight] + store[i].value);
         }
         else
         {
            T[i + 1][j] = T[i][j];
         }
      }
   }

   int value = T[n][capacity];

   return value;
}

int knapsackCalculate2D(int *value, int *weight, int size, int capacity)
{
	struct item *itm;
	int i=0;
	itm = (struct item *)malloc(size*sizeof(struct item));

	for(i=0; i<size; i++)
	{
		itm[i].value = value[i];
		itm[i].weight = weight[i];
	}

	return knapsack_2d(itm,capacity,size);
}


int main(int argc, char* argv[])
{


   return 0;
}
