#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    queue<string> s ;
    s.push("khushi") ;
    s.push("singhal") ;
    s.push("agarwal") ;
    cout<<"Top Element in STACK : " <<s.front()<<endl ;
    s.pop() ;
    cout<<"Top Element in STACK : " <<s.front()<<endl ;
    cout<<"Size -> " <<s.size()<<endl ;
    cout<<"Empty or no :"<<s.empty() ;
    cout<<endl<<endl  ;
}
