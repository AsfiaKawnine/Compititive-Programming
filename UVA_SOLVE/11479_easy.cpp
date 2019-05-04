#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,x,y,z,t,i,w;
    while(cin>>t){
        for(i=1;i<=t;i++){
            cin>>a>>b>>c;
            if(a<0||b<0||c<0)
            cout<<"Case "<<i<<": Invalid"<<endl;

            else if(a==b&&b==c)
                cout<<"Case "<<i<<": Equilateral"<<endl;
            else if(a==b||b==c||c==a)
                cout<<"Case "<<i<<": Isosceles"<<endl;
            else{
                if((a>b)&&(a>c)){
                    z=a;
                    x=b;
                    y=c;
                }
                else if((b>a)&&(b>c)){
                    z=b;
                    x=a;
                    y=c;
                }
                else{
                    z=c;
                    x=a;
                    y=b;
                }
            w=x+y;
            if(w>=z)
                cout<<"Case "<<i<<": Scalene"<<endl;
            else
                cout<<"Case "<<i<<": Invalid"<<endl;
            }
        }
    }
    return 0;
}
