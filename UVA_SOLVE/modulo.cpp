#include <bits/stdc++.h>
using namespace std;

long call(long b,long  p, long m){

    if(p==0) return 1;
    if(p%2==0){
        long int z =  call(b,p/2,m);
        return ((z%m) * (z%m)%m);
    }
    else
        return (((b%m) * (call (b,p-1,m)%m))%m);
}


int main(){
    long  b,p,m;
    while(cin>>b>>p>>m){
    cout<<call(b,p,m)<<endl;
    }
}
