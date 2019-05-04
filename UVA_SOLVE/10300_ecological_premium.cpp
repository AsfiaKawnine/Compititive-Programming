#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,f,s,n,p,m,mm;
    while(cin>>t){
        while(t--){
            cin>>f;
            mm=0;
            while(f--){
                cin>>s>>n>>p;
                m=s*p;
                mm=mm+m;
                //cout<<m<<" "<<mm<<endl;
            }
            cout<<mm<<endl;
        }
    }
}
