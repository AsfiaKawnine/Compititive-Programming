#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("q.txt","r",stdin);
    //freopen("q2.txt","w",stdout);
    int t,i,d,p,j,k,c,h;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>d>>p;
        bool a[d];
        memset(a,true,sizeof(a));
        c=0;
        for(j=1;j<=p;j++){
            cin>>h;
            for(k=(h-1);k<d;k+=h){
                a[k]=false;
            }
        }
        for(k=5;k<d;k+=7){
            a[k]=true;
        }
        for(k=6;k<d;k+=7){
            a[k]=true;
        }
        for(k=0;k<d;k++){
            if(a[k]==false)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
