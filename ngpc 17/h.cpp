#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,i,a[10000],j,k,c,s;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>a[i];
        a[0]=0;
        s=0;
        for(j=1;j<=(n-1);j++){
            c=0;
            for(k=j+1;k<=n;k++){
                if(a[k-1]>a[k]){
                    if(a[k]<a[k-1])
                        c++;
                }//cout<<a[j]<<" "<<a[k]<<endl;
            }
            cout<<c<<" ";
            if(s<c)
                s=c;
        }
    cout<<s<<endl;
    }
}
