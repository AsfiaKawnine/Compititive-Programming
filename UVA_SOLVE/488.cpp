#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,l,a,b;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                for(k=1;k<=j;k++)
                    printf("%d",j);
                printf("\n");
            }
            for(j=m-1;j>=1;j--)
            {
                for(k=1;k<=j;k++)
                    printf("%d",j);
                printf("\n");
            }
            if(i<n)
                printf("\n");
        }
        if(b<a)
            printf("\n");
    }
    return 0;
}
