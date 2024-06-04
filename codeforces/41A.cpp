#include<iostream>
#include<algorithm>
using namespace std ;
string  rev(string , int) ;
void ifpalin(string,string) ;
int main()
{
    string s ,t;
    cout<<"Enter string :" <<endl ;
    cin>>s>>t ;
    int l= s.length() ;
     string newstr =rev(s,l) ;
     ifpalin(t,newstr) ;
}
string rev(string str,int n)
{
    int s =0 ;
    int e =n-1 ;
    while(s<=e)
    {
      swap(str[s++],str[e--]) ;
    }
    return str ;
}
void ifpalin(string t,string newstr)
{
    if(t==newstr)
        cout<<"YES" ;
    else
        cout<<"NO" ;
}
