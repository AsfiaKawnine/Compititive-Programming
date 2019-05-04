#include <iostream>
using namespace std;
int main()
{
    long long int n,i,r;
    while(cin>>n)
    {
        if(n<0&&n%2==0)
        cout<<"Underflow!"<<endl;
        else if(n<0&&n%2!=0)
        cout<<"Overflow!"<<endl;
        else if(n<8)
        cout<<"Underflow!"<<endl;
        else if(n>13)
        cout<<"Overflow!"<<endl;
        else
        {
        r=1;
        for(i=1;i<=n;i++)
        {
         r=i*r;
        }
        cout<<r<<endl;
        }
    }
    return 0;
}
