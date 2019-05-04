#include<stdio.h>
int main()
{
    long long int n,i,j,k,x,y,max,count;
    while(scanf("%lld %lld",&x,&y)==2)
   //scanf("%d %d",&i,&j);
    {if(x>y)
    {i=y;j=x;}
    else
    {i=x;j=y;}
        max=0;
        for(k=i;k<=j;k++)
        {
            n = k;
            count=1;
            while(n!=1)
            {
                if(n%2==0)
                    n=n/2;
                else
                    n=3*n+1;
                    count++;
            }
            if(count>max)
                max=count;
        }
        printf("%lld %lld %lld\n",x,y,max);

    }

    return 0;

}
