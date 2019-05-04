#include<stdio.h>

int main()
{
    freopen("q.txt","s",stdin);
    freopen("q2.txt","w",stdout);
    int c=0;
    char ch;
    while(scanf("%c",&ch)==1)
    {
            if(ch=='"')
            {
                c++;
                if(c%2==0)
                  printf("''");
                else
                    printf("``");
            }
            else
                printf("%c",ch);

       }
    return 0;
}
