#include<bits/stdc++.h>
using namespace std;
main()
{
    freopen("q.txt","r",stdin);
    freopen("q2.txt","w",stdout);
    char s[100000],l[100000];
    int i,j,count,t,k;
    while(scanf("%s%s",&s,&l)==2)
    {
        j=0;
        count=0;
        for(i=0;i<strlen(s);i++)
        {
            while(j<strlen(l))
            {
                if(s[i]==l[j])
                {
                    count++;
                    j=j++;
                    break;
                }
                else
                    j++;
            }
        }
        if(count==strlen(s))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
