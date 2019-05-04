#include<stdio.h>
int main()
{
    int i,n,j,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b&&b==c&&c==d)
            printf("square\n");
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
            printf("rectangle\n");
        else if((a<=(b+c+d))&&(b<=(a+c+d))&&(c<=(b+a+d))&&(d<=(b+c+a)))
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
