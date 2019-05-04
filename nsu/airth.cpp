#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x,valx,y,valy,d,n,t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>x>>valx>>y>>valy;
        if(x==1)
            cout<<"Case "<<i<<": "<<valx<<endl;

        else if((valy-valx)>0){
            d=(valy-valx)/(y-x);
            if(d==1)
                cout<<"Case "<<i<<": 1"<<endl;
            else if((y-x)>1){
                n=(valx-d)/(x-1);
                cout<<"Case "<<i<<": "<<n<<" "<<d<<endl;
            }
            else{
                n=(valx-d)/x;
                cout<<"Case "<<i<<": "<<n<<endl;
            }
        }

        else{
            d=(valx-valy)/(x-y);
            if(d==1)
                cout<<"Case "<<i<<": 1"<<endl;
            else if((x-y)>1){
                n=(valy-d)/(y-1);
                cout<<"Case "<<i<<": "<<n<<endl;
            }
            else{
                n=(valy-d)/y;
                cout<<"Case "<<i<<": "<<n<<endl;
            }
        }
    }
}
