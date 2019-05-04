#include<bits/stdc++.h>

int main(){
    int n,a[100],i,j;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n;i++){
            for(j=1;j<n;j++){
                if(a[j]>a[j+1]){
                    a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);
                }
            }
        }
        for(i=1;i<n;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[n]);
    }
}
