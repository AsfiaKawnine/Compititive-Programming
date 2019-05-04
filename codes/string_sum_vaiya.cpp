#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    int x,y,z=0;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--){
        x = a[i] - 48; // making the index as integer
        y = b[i] - 48; // making the index as integer
        z = x + y + z; // adding two integer
        a[i] = (z%10) + 48; //making the integer as character
        z = z/10;    // saving the reminder
    }
    cout<<z<<a<<endl; // printing the reminder 1st and then the sum of string

    // start coding now...
}
