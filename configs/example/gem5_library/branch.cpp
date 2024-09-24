


#include <stdio.h>
#include <cstdlib>

#include "gem5/m5ops.h"

#define N 2048

int main(int argc, char* argv[])
{
   // printf("Hello world!\n");

    int a[N];

    // Here we initialize the memory.
    for (int i=0; i < N; i++)
        a[i] = -1;
        //a[i] = std::rand() % 256;

        
    const int num_iter = 10;
    //printf("Summing array elements %d times...\n", num_iter);

    
    for (int iter=0; iter < num_iter; iter++) {
       // printf("iter: %d\n", iter);
       // fflush(stdout);
        int sum = 0;
    m5_reset_stats(0, 0);

    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;
    if (a[0] > 0)
        sum += 1;
    if (a[1] > 1)
        sum += 2;
    if (a[2] > 2)
        sum += 3;
    if (a[3] > 3)
        sum += 4;

    m5_dump_stats(0, 0);


        //printf("Iter:%d = Sum: %d\n", iter, sum);
    }
    return 0;
}

