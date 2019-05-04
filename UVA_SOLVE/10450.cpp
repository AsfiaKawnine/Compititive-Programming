#include<stdio.h>
int main()
{
    long long int i,b,x,y,n,s,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&b);
        printf("Scenario #%lld:\n",i);
        x=2;
        y=3;
        if(b==1)
            printf("%lld\n\n",x);
        else if(b==2)
            printf("%lld\n\n",y);
        else
        {
            for(j=3;j<=b;j++)
            {
                s=x+y;
                x=y;
                y=s;
            }
            printf("%lld\n\n",s);
        }

    }
    return 0;
}
