int getSumMaxMin(int arr[],int N)
{
    int MIN=0, MAX=0, K=0, L=0;
    int i=0;
    int sum=0;

    if(i==0)
    {
        if(arr[i]<arr[i+1])
        {
            MIN=arr[i];
            MAX=arr[i+1];
            K=i;
            L=i+1;
        }
        else
        {
            MIN=arr[i+1];
            MAX=arr[i];
            K=i+1;
            L=i;
        }
    }

    for(i=0; i<N; i++)
        {
           if(arr[i]<MIN)
           {
               MIN=arr[i];
               K=i;
           }
           if(arr[i]>MAX)
           {
               MAX=arr[i];
               L=i;
           }
        }

    if(((L-K)==1) || ((K-L)==1))
        sum=0;
    else if(L>K)
    {
        for(i=K+1;i<L;i++)
        {
            arr[i]=arr[i]+sum;
            sum=arr[i];
        }
    }
    else if(K>L)
    {
        for(i=L+1;i<K;i++)
        {
            arr[i]=arr[i]+sum;
            sum=arr[i];
        }
    }

    return sum;
}
