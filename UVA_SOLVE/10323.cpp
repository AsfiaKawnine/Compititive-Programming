#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,f,i;
    while(cin>>n)
    {
        f=n;
        for(i=1;i<n;i++)
        {
            f=f*(n-i);
        }
        if(f>6227020800)
            cout<<"Overflow!\n";
        else if(f<10000)
            cout<<"Underflow!\n";
        else
            cout<<f<<endl;
    }
    return 0;
}
