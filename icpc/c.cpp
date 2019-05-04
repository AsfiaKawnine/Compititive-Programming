#include<bits/stdc++.h>
using namespace std;

int Fibonacci(long long int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

int main()
{
    long long int n,k,M,t,c,m,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld", &n, &k, &M);

        }
        printf("%lld\n",c);
        p=pow(k,c);
        m=p%M;
        printf("%lld",m);

    }
    return 0;
}
