#include<stdio.h>
int main()
{
    int n,p;
    while(scanf("%d",&n)==1)
    {
        scanf("%d",&p);
        if(p%2==0)
            printf("%d %d %d\n",(p-1),((n+1)-p),((n+2)-p));
        else
            printf("%d %d %d\n",(p+1),((n+1)-(p+1)),((n+2)-(p+1)));
    }
    return 0;
}
