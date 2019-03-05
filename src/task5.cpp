int getSumInt(int arr[],int N)
{
    int K=0, L=0;
    int res=0, M;

    for(int i=0;i<N;i++)
    {
        if (arr[i]<0)
        {
            K=i;
            break;
        }
    }
    for(int i=N-1;i>=0;i--)
    {
        if (arr[i]>0)
        {
            L=i;
            break;
        }
    }
    for(int i=K+1;i<L;i++)
    {
        M=arr[i]+res;
        res=M;
        M=0;
    }

    return res;
}
