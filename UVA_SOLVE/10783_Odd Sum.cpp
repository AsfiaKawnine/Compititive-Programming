#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,i,t,a,b,j;
    cin>>t;
    for(j=1;j<=t;j++){
        cin>>a>>b;
        s=0;
        if(a==0)
            a=1;
        else if(a%2==0)
            a=a+1;
        if(b%2==0)
            b=b-1;
        for(i=a;i<=b;i=i+2){
            s=s+i;
        }
        cout<<"Case "<<j<<": "<<s<<endl;
    }
}

