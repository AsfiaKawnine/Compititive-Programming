#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[105];
    while(scanf("%s",&s)==1){
        if(s[0]>90)
            s[0]=s[0]-32;
        for(int i=1;i<strlen(s);i++){
            if(s[i]<97)
                s[i]=s[i]+32;
        }
        cout<<s<<endl;
    }
}
