#include<bits/stdc++.h>

int main(){
    int t,i,k,a[100][100],n,e,u,v,w,q,c[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&e);
        while(e--){
            scanf("%d%d%d",&u,&v,&w);
            a[u][v]=a[v][u]=w;
        }
        scanf("%d",&q);
        while(q--){
            k=0;
            scanf("%d",&c[k]);
            k++;
        }

    }
}
