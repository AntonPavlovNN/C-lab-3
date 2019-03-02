#include<string.h>

int getSum(char buf[])
{
    int value=0;
    int value1=0;
    int id=0;
    int i=0;

    while(buf[i]!='\0')
    {
        if(buf[i]>='0'&& buf[i]<='9')
        {
            if(id<3)
            {
                value=value*10+(buf[i]-'0');
                id++;
            }
            else
            {
                value1=value+value1;
                value=0;
                id=0;
                continue;
            }
        }
        else
        {
            value1=value+value1;
            value=0;
            i++;
            id=0;
            continue;
        }
        i++;
    }
    value1=value+value1;
    return value1;
}
