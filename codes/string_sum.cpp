#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,l,k;
    int i,a[1000],b[1000],x[1000];
    cin>>s>>l;
    for(i=0;i<s.size();i++)
        a[i]=s[i]-48;
    for(i=0;i<l.size();i++)
        b[i]=l[i]-48;
    x[s.size()]=0;
    for(i<s.size();i>=0;i--)
    {
        x[i]=x[i]+a[i]+b[i];
        if(x[i]>9)
            x[i]=x[i]+1;
    }
    for(i=0;i<strlen(x);i++)
        k[i]=x[i]+48;
    cout<<k;
    return 0;
}
