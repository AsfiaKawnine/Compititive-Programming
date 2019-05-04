#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a1,a2,a3,a4,x,d1,d2,d3,d4,k1,k2,k3,k4,s1,s2,i,j,k;
    while(cin>>t){
    for(x=1;x<=t;x++){
        cin>>a1>>d1>>k1>>a2>>d2>>k2;
        s1=0;
        s2=0;
        if(a1<k1){
            a3=a1;
            k3=k1;
            d3=d1;
        }
        else{
            a4=a1;
            k4=k1;
            d4=d1;
        }
        if(a2<k2){
            a3=a2;
            k3=k2;
            d3=d2;
        }
        else{
            a4=a2;
            k4=k2;
            d4=d2;
        }
        j=a3;
        for(i=a3;i<=k3;i++)
        {
           // cout<<i<<" ";
        //    i=i+d1;
            j=j+d3;
            s1=s1+j;
        }
        //cout<<endl;
        //if(d4>0)
          //  d4=d4*(-1);
        k=a4;
        for(i=a4;i>=k4;i++)
        {
            //cout<<i<<" ";
        //    i=i+d1;
            k=k+d4;
            s2=s2+i;
        }
        //cout<<endl;
//        cout<<endl;
        cout<<"Case "<<x<<": "<<s1+s2<<endl;
    }}
}
