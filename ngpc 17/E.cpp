#include<bits/stdc++.h>
using namespace std;

#define n 1000
string x[100000000];
bool a[n];
prime(int n){
    memset(a,true,sizeof(a));
    a[0] = a[1] = false;
    for(int i=4;i<n;i+= 2)
        a[i]=false;
    for(int i=3;i*i<n;i+=2){
        int k=2;
        if( a[i]==true){
            for(int j = i*k;j<n;j = k * i ){
                a[j] = false;
                k++;}
        }
    }
    int j=1;
    for(int i =1;i<n;i++){
        if(a[i]== true){
            x[j]=a[i];
            j++;
        }
    }
}

int main(){
    int c,b,t,i;
    i=0;
    while(scanf("%d %d",&c,&b)==2){
        if(c==0 && b==0)
            return 0;
        else{
            i++;
            t=x[c]+x[b];
            if(t%2==0)
                printf("Case %d: Even.\n",i);
            else
                printf("Case %d: Odd.\n",i);
        }
    }
    return 0;
}
