#include<bits/stdc++.h>
int main()
{
    int m,n,i,j,a[100][100],row_sum,column_sum;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=m;i++)
    {
        row_sum=0;
        for(j=1;j<=n;j++)
        {
            row_sum=row_sum+a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("%d\n",row_sum);
    }
    for(j=1;j<=n;j++)
    {
        column_sum=0;
        for(i=1;i<=m;i++)
            column_sum=column_sum+a[i][j];
        printf("%d ",column_sum);
    }
    return 0;
}
