#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("q.txt","r",stdin);
    //freopen("q2.txt","w",stdout);
    string s,l;
    int i;
    while(cin>>s){
        for(i=0;i<s.size();i++)
            s[i]=s[i]-7;
        cout<<s<<endl;
    }
    return 0;
}
