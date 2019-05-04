#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,n,a[10000];
    cin>>t;
    while(t--){
        cin>>n;
        int i;
        int b=1,c=1;
        cin>>a[0];
        for(i=1;i<n;i++)
            {
                cin>>a[i];
                if(a[i]!=a[i-1])
                    b++;
                else if(a[i]==a[i-1]){
                    int s=a[i];
                    c++;}
            }
            if(b==n)
                printf("1\n");
            else
                printf("%d\n",c);
    }
    return 0;
}
