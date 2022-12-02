#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    const int N=30;
    float startTime = (float)clock()/CLOCKS_PER_SEC;

    for (unsigned int i = 0; i<N; i++){
        fibonacciRecursive(i);
    }

    float endTime = (float)clock()/CLOCKS_PER_SEC;
    double timeTaken = endTime - startTime;

    printf("Time taken on recursive approach with N = %d : %f\n", N, timeTaken);

    return 0;
}
