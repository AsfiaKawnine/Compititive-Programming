#include<stdio.h>
int main()
{
    int n,i,j;
    {
        while(scanf("%d",&n)==1)
       {
           i=1;
            for(j=1;;j++)
            {
                i=i%n;
                if(i==0)
                    break;
                else
                i=i*10+1;
            }
            printf("%d\n",j);
        }

    }
}
