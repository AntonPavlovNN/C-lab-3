#include<stdio.h>
#include"task6.h"
#include<time.h>
#include<stdlib.h>

#define N 7

int main()
{
    int arr[N];

    int result=0;

    srand(time(0));

    for(int i=0; i<N ;i++)
    {
        arr[i]=rand()%(9-1+1)+1;
        if(rand()%2==0)
            arr[i]*=(-1);
    }

    for(int i=0; i<N ;i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    result = getSumMaxMin(arr,N);

    printf("%d\n", result);

    return 0;
}
