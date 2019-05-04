#include<iostream>
using namespace std;

int main(){
    long long int bin,bin2, dec,dec2, rem,rem2, num,num2, base = 1,base2=1;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin >> num >>num2;
        dec = 0;
        dec2=0;
        base = 1;
        base2=1;
        bin = num;
        bin2 = num2;
        while (num > 0){
            rem = num % 10;
            dec = dec + rem * base;
            base = base * 2;
            num = num / 10;
        }
        while (num2 > 0){
            rem2 = num2 % 10;
            dec2 = dec2 + rem2 * base2;
            base2 = base2 * 2;
            num2 = num2 / 10;
        }
        if(dec>dec2)
            cout<<"Case "<<i<<": A"<<endl;
        else if(dec<dec2)
            cout<<"Case "<<i<<": B"<<endl;
        else
            cout<<"Case "<<i<<": Same"<<endl;
        //cout << bin<<" "<<bin2 << " : " << dec<<" "<<dec2 << endl;
    }
    return 0;

}
