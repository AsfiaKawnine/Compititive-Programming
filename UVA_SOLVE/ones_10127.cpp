#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("q.txt","r",stdin);
    //freopen("q2.txt","w",stdout);
    int n;
    while(cin>>n){
        long long int d=1;
        int i=1;
        while(d){
            i++;
            d=(d*10+1)%n;
        }
        cout<<i<<endl;
    }
}
