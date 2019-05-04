#include<bits/stdc++.h>
using namespace std;

con(num){
    while(num>0){
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    return num;
}

int main(){
    int t,i,a,b,x,y;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b;
        x=a;
        y=b;
        con(x);
        con(y);
        if(x>y)
            cout<<"Case "<<i<<": A";
        else
            cout<<"Case "<<i<<": B";
    }
}
