#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x = 0,y=1,tmp=0;
   for(int i = 1; i<=50;i++){
        printf("%lld\n",x+y);
        tmp = x;
        x = y;
        y = x+tmp;
   }
   return 255;
}
