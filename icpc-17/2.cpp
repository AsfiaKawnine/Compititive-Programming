#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int i=0,t,j;
    char s[10000],r[10000],c;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        gets(s);
        for(i=0;i<=strlen(s);i++){
            c=s[i];
            r[i]=(toupper(c));
        }
        printf("Case %d:",j);
        puts(r);
    }
    return 0;
}
