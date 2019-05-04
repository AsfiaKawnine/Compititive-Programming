#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a[10000],i,mx,mn,n;
    cin>>t;
    cin>>a[0];
    cout<<"Case 1: 1.00"<<endl;
    mx=a[0];
    mn=a[0];
    for(i=1;i<=t-1;i++)
    {
        cin>>a[i];
        if(mx<a[i])
            mx=a[i];
        if(mn>a[i])
            mn=a[i];
        double d=(double)mx/(double)mn;
        cout<<"Case "<<i+1<<": ";
        printf("%.2lf\n",d);
        //cout<<d<<setprecision(2)<<endl;
    }
    return 0;
}
