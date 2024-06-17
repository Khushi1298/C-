#include<iostream>
#include<list>
using namespace std ;
int main()
{
    list<int> nw(6,20) ;
    cout<<"LIST NEW " <<endl ;
    for(int i:nw)
    {
        cout<<i<<" " ;
    }cout<<endl<<endl  ;

    cout<<"List k " <<endl ;
    list<int> k;
    k.push_front(3) ;
    k.push_back(4) ;
    for(int i:k)
    {
        cout<<i<<" " ;
    }cout<<endl ;
    cout<<endl ;
    //Erase(delete) element from list
    cout<<" Size Before Erase :"<<k.size()<<endl ;
    k.erase( k.begin()) ;
    cout<<"List after erase begin"<<endl ;
    for(int i:k)
    {
        cout<<i<<" " ;
    }cout<<endl ;
    cout<<"Size After Erase :"<<k.size()<<endl ;
}
