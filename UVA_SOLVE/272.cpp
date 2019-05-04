#include<bits/stdc++.h>
using namespace std;
main()
{
    char l;
    int count;
    count=0;
    while(scanf("%c",&l)==1)
    {
        if(l!='"')
            printf("%c",l);
        else
        {
            count++;
            if(count%2!=0)
                printf("``");
            else
                printf("''");
        }
    }
    return 0;
}
