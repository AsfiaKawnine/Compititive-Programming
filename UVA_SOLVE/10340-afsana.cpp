#include<iostream>
#include<string>

using namespace std;

int main(){

    string s,t;
    int n,cont,p;

    while(cin>>s>>t){
        n=s.size();
        p=t.size();
        cont=0;

        for(int i=0;i<p && cont<n;i++)
            if(t[i]==s[cont])
                cont++;

        if(cont==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
