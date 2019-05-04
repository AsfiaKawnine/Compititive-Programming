#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    double a1,a2,l,r1,r2;
    //cout<<"Enter 2 names:"<<endl;
    while(cin>>s1>>s2){
        a1=0;
        a2=0;
        for(int i=0;i<s1.size();i++){
            a1=char(a1+(s1[i]));
        }
        //cout<<a1<<endl;
        for(int i=0;i<s2.size();i++){
            a2=char(a2+(s2[i]));
        }
        //cout<<a2<<endl;

        while(a1>10){
            r1=0;
            r1=(r1+(a1%10.00));
            a1=r1+(a1/10.00);
        }
        //a1=a1+r1;
        //cout<<a1<<endl;
        while(a2>10){
            r2=0;
            r2=r2+(a2%10.00);
            a2=r2+(a2/10.00);
        }
        //a2=a2+r2;
        //cout<<a2<<endl;

        if(a1>a2){
            a2=a2*100;
            l=(a2/a1);
        }
        else{
            a1=a1*100;
            l=(a1/a2);
        }
        cout<<l<<" %"<<endl;
    }
}
