#include<string.h>

int wordCount(char buf[])
{
    int M =0;
    int word=0;
    M=(int)strlen(buf);

    if(buf[0]=='\0')
        return word;

    for(int i=0;i<M;i++)
    {
        if((buf[i]!=' ' && buf[i+1]==' ')||(buf[i]!=' ' && buf[i+1]=='\0'))
            word++;
        else
            continue;
    }
    return word;
}
