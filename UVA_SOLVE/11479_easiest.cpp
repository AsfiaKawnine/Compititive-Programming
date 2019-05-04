#include<bits/stdc++.h>
using namespace std;

int main(){
    long int a,b,c,t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a<0||b<0||c<0)
            cout<<"Case "<<i<<": Invalid"<<endl;
        else{
            if(a==b&&b==c)
                cout<<"Case "<<i<<": Equilateral"<<endl;
            else if(a==b||b==c||c==a)
                cout<<"Case "<<i<<": Isosceles"<<endl;
            else{
                if(a>b&&a>c&&a<=(b+c))
                    cout<<"Case "<<i<<": Scalene"<<endl;
                else if(b>a&&b>c&&b<=(a+c))
                    cout<<"Case "<<i<<": Scalene"<<endl;
                else if(c>b&&c>a&&c<=(a+b))
                    cout<<"Case "<<i<<": Scalene"<<endl;
                else
                    cout<<"Case "<<i<<": Invalid"<<endl;
            }
        }
    }
    return 0;
}
