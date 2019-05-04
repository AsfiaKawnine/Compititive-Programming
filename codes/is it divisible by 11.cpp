#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("q.txt","r",stdin);
    //freopen("q2.txt","w",stdout);

    long long int n,p;
    while(cin>>n){
        if(n==0)
           break;
    else
    {
        p=(n%11);
        if(p==0)
            cout<<n<<" is a multiple of 11"<<endl;
            else
            cout<<n<<" is not a multiple of 11"<<endl;
    }
    }
    return 0;

}
