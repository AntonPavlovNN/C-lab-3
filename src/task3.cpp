#include<string.h>

int getMaxWord(char buf[],char word[])
{
    int j=0, k=0;
    int letterCount=0;
    int longestWord=0;
    int len=0;
    int lenghtOfStr = 0;

    lenghtOfStr=strlen(buf);

    for(int i=0;i<=lenghtOfStr;i++)
    {
        if(buf[i]!=' ')
            letterCount++;
        else
        {
            if(letterCount>longestWord)
            {
                longestWord=letterCount;
                j=i-letterCount;
            }
            letterCount=0;

        }

        if(letterCount>longestWord)
        {
            longestWord=letterCount;
            j=i-letterCount;
        }
    }

    longestWord = longestWord+j;

    for(int i=j+1;i<=longestWord;i++)
    {
        word[k]=buf[i];
        k++;
    }

    len=(int)strlen(word);

    return len;
}
