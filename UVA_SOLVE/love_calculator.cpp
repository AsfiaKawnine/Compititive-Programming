#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    int a1,a2,l,r1,r2,l1,l2;
    while(cin>>s1>>s2){
        a1=0;
        a2=0;
        for(int i=0;i<s1.size();i++){
            a1=a1+(s1[i]-96);
        }
        //cout<<a1<<endl;
        for(int i=0;i<s2.size();i++){
            a2=a2+(s2[i]-96);
        }
        //cout<<a2<<endl;

        while((a1%10)>0){
            r1=a1%10;
            l1=a1/10;
            a1=r1+l1;
        }
        //cout<<a1<<endl;
        while((a2%10)>0){
            r2=a2%10;
            l2=a2/10;
            a2=r2+l2;
        }
        //cout<<a2<<endl;

        if(a1>a2)
            l=(a2/a1)*100;
        else
            l=(a1/a2)*100;
        cout<<l<<endl;
    }
}
