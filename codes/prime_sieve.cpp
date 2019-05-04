#include <bits/stdc++.h>
using namespace std;

#define n 1000000
bool a[n];
int main(){
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
    //cout<<endl;
    }

    for(int i =1;i<n;i++){
        if(a[i]== true)
            printf("%d  ",i);
    }

}
