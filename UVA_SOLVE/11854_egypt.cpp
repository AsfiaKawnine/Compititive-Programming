#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    while(cin>>a>>b>>c){
        if(a==0&&b==0&&c==0)
            break;
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
            int w=(x*x)+(y*y);
            if(w==(z*z))
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }
    return 0;
}
