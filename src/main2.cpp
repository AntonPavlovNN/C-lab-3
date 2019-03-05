  #include<stdio.h>
#include<string.h>

#define N 256

int main()
{
    char buf[N]={0};
    int M=0, j=0, word=0;
    int letterCounter=0;

    printf("Enter a string: \n");
    fgets(buf, N, stdin);
    if(buf[strlen(buf)-1]=='\n')
        buf[strlen(buf)-1]='\0';

    M=(int)strlen(buf);

    while(j<=M)
    {
        if(buf[j]!=' ')
        {
            putchar(buf[j]);
            letterCounter++;
        }
        else if(letterCounter==0)
        {
            j++;
            continue;
        }
        else
        {
            printf(" - %d\n", letterCounter);
            letterCounter=0;
            word++;
        }

        j++;

        if(j==M)
        {
            printf(" - %d\n", letterCounter);
            word++;
        }
    }
    printf("words: %d\n", word);
    return 0;
}
