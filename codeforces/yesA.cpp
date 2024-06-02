#include<iostream>
using namespace std ;
int main()
{
    string s ;
    int t ;
    cout<<"Enter no of Input:"<<endl ;
    cin>>t ;
    cout<<"Enter STRING :"<<endl ;
    for(;t>0;t--)
    {
        cin>>s ;
    if ( (s[0]=='y' || s[0]=='Y') &&
            (s[1]=='e' || s[1]=='E') &&
              (s[2]=='s' || s[2]=='S') )
               cout<<"YES"<<endl ;
        else
            cout<<"No"<<endl ;
    }
}

