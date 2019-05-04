#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    map<ll,ll>mp;
    ll t;
    cin>>t;
    for(ll c=1;c<=t;c++)
    {
        ll mx=-1;
        ll n;
        cin>>n;
        while(n--)
        {
            ll a;
            cin>>a;
            mp[a]++;
            mx=max(mp[a],mx);
        }
        cout<<"Case "<<c<<": "<<mx<<"\n";
        mp.clear();
    }
    return 0;
}
