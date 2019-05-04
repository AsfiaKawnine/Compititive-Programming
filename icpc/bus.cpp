#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c=0,mx,i,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        i=n-1;
        mx=0;
        c=0;
        while(i--)
        {
            cin>>a>>b;
            c=c+(a-b);
            if(mx<c)
                mx=c;
        }
        cs++;
        printf("Case %d: %d\n",cs,mx);
        mx=0;
    }
    return 0;
}
