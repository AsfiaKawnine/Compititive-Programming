#include <bits/stdc++.h>
int main()
{
    long long int i,j;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        if(i<j)
        {

            printf("%lld\n",j-i);
        }
        else
        {
            printf("%lld\n",i-j);
        }
    }
    return 0;
}
