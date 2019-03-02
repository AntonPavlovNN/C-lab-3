#include<stdio.h>
#include<string.h>

#define N 128

int main()
{
    char buf[N]={0};
    char arr[N]={0};
    int k=0, h=0;
    char symbol [N]={0};
    char freq [N]={0};
    int L=0, M=0;
    char tmp=0;

    printf("Enter a string: \n");
    fgets(buf, N, stdin);

    if((buf[strlen(buf)-1])=='\n')
        buf[strlen(buf)-1]='\0';
    L=(int)strlen(buf);

    for(int i=0;i<L;i++)
        {
            arr[(unsigned char)buf[i]]++;
        }

    for (int i=0;i<N;i++)
        {
            if(arr[i]!=0)
            {
                symbol[k]=i;
                k++;
                freq[h]=arr[i];
                h++;
            }
        }
    if((symbol[strlen(symbol)-1])=='0')
        symbol[strlen(symbol)-1]='\0';

    if((freq[strlen(freq)-1])=='0')
        freq[strlen(freq)-1]='\0';

    M=(int)strlen(freq);

    while(1)
    {
        int i=0;
        int swap=1;
        for(i=0; i<M-1;i++)
        {
            if(freq[i]<freq[i+1])
            {
                swap=0;
                tmp=freq[i];
                freq[i]=freq[i+1];
                freq[i+1]=tmp;

                tmp=symbol[i];
                symbol[i]=symbol[i+1];
                symbol[i+1]=tmp;
            }
            else
                continue;
        }
        if(swap==1)
            break;

    }

    for(int i=0; i<M;i++)
        printf("%c - %d\n", symbol[i], freq[i]);

    return 0;
}
