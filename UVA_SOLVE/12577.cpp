#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[6];
    int i;
    i=1;
    while(scanf("%s",s)==1)
    {
        if(s[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(s[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(s[0]=='*')
            break;
        i++;
    }
    return 0;
}
