#include<stdio.h>
#include"task4.h"
#include<string.h>

#define N 128

int main()
{
    char buf[N]={0};
    printf("Enter a string: \n");
    fgets(buf, N, stdin);
    if(buf[strlen(buf)-1]=='\n')
        buf[strlen(buf)-1]='\0';
    getSum(buf);
    printf("%d\n", getSum(buf));

    return 0;
}
