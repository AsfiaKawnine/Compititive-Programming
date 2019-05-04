#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n>=0)
{
 cout<<0;
            for(i=1;i<=n;i++)
            {
                printf(" %lld",i);

            }
}
else if(n<0)
{
cout<<n;
             for(i=n+1;i<=0;i++)
            {
                printf(" %lld",i);
            }
}


            printf("\n");
    }
    return 0;
}
