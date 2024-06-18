#include<iostream>
#include<stack>
using namespace std ;
int main()
{
    stack<string> s ;
    s.push("khushi") ;
    s.push("singhal") ;
    cout<<"Top Element in STACK : " <<s.top()<<endl ;
    s.pop() ;
    cout<<"Top Element in STACK : " <<s.top()<<endl ;
    cout<<"Size -> " <<s.size()<<endl ;
    cout<<"Empty or no :"<<s.empty() ;
    cout<<endl<<endl  ;
    //New stack
    stack<int> n ;
    cout<<"Size -> " <<n.size()<<endl ;
    cout<<"Empty or no :"<<n.empty() ;
}
