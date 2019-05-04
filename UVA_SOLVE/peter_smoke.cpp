#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("p.txt","r",stdin);
    //freopen("p2.txt","w",stdout);
    int n,x,z,d,s;
    while(cin>>n>>x){
        z=n;
        d=0;
        s=0;
    while(n>=x){
        d=n/x;
        s=s+d;
        n=d;
    }
    cout<<s+z<<endl;
    }
}
