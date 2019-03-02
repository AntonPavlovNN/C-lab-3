#include<stdio.h>
#include"task5.h"
#include<time.h>
#include<stdlib.h>

#define N 7

int main()
{
    int arr[N];

    srand(time(0));

    for(int i=0; i<N ;i++)
    {
        arr[i]=(rand()%10);
        if(rand()%2==0)
            arr[i]*=(-1);
    }


    for(int i=0; i<N ;i++)
    {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    getSumInt(arr,N);

    printf("%d\n", getSumInt(arr,N));

    return 0;
}

