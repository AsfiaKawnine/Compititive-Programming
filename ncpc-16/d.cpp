#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,t,a1,a2,a3,a4,x,d1,d2,d3,d4,k1,k2,k3,k4,s1,s2,i,k,i1;
    while(cin>>t){
    for(x=1;x<=t;x++){
        cin>>a1>>d1>>k1>>a2>>d2>>k2;
        s1=0;
        s2=0;
        j=a1;
        for(i=1;i<k1;i++){
            j=j+d1;
            s1=s1+j;
        }
        k=a2;
        for(i1=1;i1<k2;i1++){
            k=k+d2;
            s2=s2+k;
        }
        cout<<"Case "<<x<<": "<<s1+a1+s2+a2<<endl;

    }
    }
}
