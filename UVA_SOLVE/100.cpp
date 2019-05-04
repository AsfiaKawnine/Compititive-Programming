#include<stdio.h>
int main()
{
    long long int i,k,j,n,count,max;
    while(scanf("%lld%lld",&i,&j)==2)
    {
        max=0;
        if(i<j)
        {
            for(k=i;k<=j;k++)
            {
                n = k;
                count = 1;
                while(n!=1)
                {
                    if(n%2!=0)
                        n=3*n+1;
                    else
                        n=n/2;
                    count=count+1;
                    if(max<count)
                        max=count;
                }
            }
        }
        else
        {
            for(k=j;k<=i;k++)
            {
                n = k;
                count = 1;
                while(n!=1)
                {
                    if(n%2!=0)
                        n=3*n+1;
                    else
                        n=n/2;
                    count=count+1;
                    if(max<count)
                        max=count;
                }
            }
        }
        printf("%lld %lld %lld\n",i,j,max);
    }
    return 0;
}
