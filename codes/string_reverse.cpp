#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,x;
    char b;
    int l,i;
    cin>>s;
    x = s;
    l=s.size();
    for(i=0;i<l/2;i++)
    {
        b=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=b;
    }
    if(s.compare(x)==0)
        cout<<s<<" is palindrome\n";
    else
        cout<<x<<" is not palindrome\n"<<endl;
    return 0;
}
