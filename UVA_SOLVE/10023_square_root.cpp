#include<bits/stdc++.h>
using namespace std;

#define n 1.7E308
int main(){
    long double x,z;
    string y[n];
    int t;
    while(cin>>t){
        while(t--){
            cin>>x;
            z=sqrt(x);
            int i=0;
            while(z%10){
                y[i]=z%10;
                z=z/10;
                i++;
            }
            //y = (long double) z;
            cout<<y<<endl;
        }
    }
}
