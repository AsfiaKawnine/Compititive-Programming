#include<bits/stdc++.h>
int main()
{
    long long int i,b,x,y,n,s,j;
    long long int k,M,t,c,m,p;
    scanf("%lld",&t);
    //scanf("%lld",&n);
    //for(i=1;i<=n;i++)
    for(long long int w=1;w<=t;w++)
    {
        scanf("%lld %lld %lld", &b, &k, &M);
        //printf("Scenario #%lld:\n",i);
        x=2;
        y=3;
        if(b==1)
            c=x;
            //printf("%lld\n\n",x);
        else if(b==2)
            c=y;
            //printf("%lld\n\n",y);
        else
        {
            for(j=3;j<=b;j++)
            {
                s=x+y;
                x=y;
                y=s;
            }
            c=s;
            //printf("%lld\n\n",s);
        }
        p=pow(k,c);
        m=p%M;
        printf("Case %lld: %lld\n",w,m);

    }


    return 0;
}
