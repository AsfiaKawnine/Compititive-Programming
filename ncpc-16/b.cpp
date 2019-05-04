#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    string m;
    int d;
    cin>>t;
    for(x=1;x<=t;x++)
    {
        cin>>m>>d;
        //int p=m.length();
     //cout<<p;
     cout<<"Case "<<x<<": ";
     if(m[0]=='F'||'f')
     {
       if(d<13)
            cout<<"Pohela Falgun";
            else if(d<14)
            cout<<"Valentine's Day";
       else if(d<21)
        cout<<"International Mother Language Day";
        else
            cout<<"International Women's Day";
     }
     else if (m[0]=='O'||'o')
     {
         if(d<31)
            cout<<"Halloween";
         else
            cout<<"World Toilet Day";
     }
     else if(m[0]=='N'||'n')
     {
         if(d<19)
            cout<<"World Toilet Day";
         else
            cout<<"Human Rights Day";

     }
     else if(m[0]=='D'||'d')
     {
         if(d<10)
            cout<<"Human Rights Day";
         else if(d<16)
            cout<<"Victory Day of Bangladesh";
         else if(d<25)
            cout<<"Christmas Day";
         else
            cout<<"Pohela Falgun";

     }
     else if(m[0]=='A'||'a')
     {
         if(m[1]=='p')
         {
             if(d<14)
                cout<<"Pohela Boishakh";
             else
                cout<<"May Day";
         }
         else
         {
             if(d<20)
                cout<<"World Mosquito Day";
             else
                cout<<"Halloween";
         }

     }
      else if(m[0]=='M'||'m')
     {
         if(m[2]=='r')
         {
             if(d<8)
                cout<<"International Women's Day";
             else if(d<21)
                cout<<"International Color Day";
             else if(d<26)
                cout<<"Bangladesh Independence Day";
             else
                cout<<"April Fools Day";
         }
         else
            cout<<"Father's Day";

     }
     else if(m[0]=='J'||'j')
     {
         if(m[1]=='a')
            cout<<"Pohela Falgun";

              else if (m[2]=='n'){
             if(d<19)
                cout<<"Father's Day";
             else
                cout<<"Mandela Day";
                }
                 else
         {
             if(d<18)
                cout<<"Mandela Day";
             else
                cout<<"World Mosquito Day";

         }

         }




     else if (m[0]=='S'||'s')
        cout<<"Halloween";
     cout<<endl;
    }
    return 0;
}
