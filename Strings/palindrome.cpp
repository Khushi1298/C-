#include<iostream>
#include<algorithm>
using namespace std ;
string  rev(string , int) ;
bool ifpalin(string,string) ;
int main()
{
    string str ;
    cout<<"Enter string :" <<endl ;
    cin>>str ;
    int l= str.length() ;
    cout<<l <<endl ;
     string newstr =rev(str,l) ;
    cout<<"reverse :"<< newstr<<endl  ;
      if (ifpalin(str , newstr))
        cout << "Given string is palindrome" ;
      else
        cout << "Given string is not palindrome" ;
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
bool ifpalin(string str,string newstr)
{
    if(str==newstr)
        return 1 ;
    else
        return 0;
}
