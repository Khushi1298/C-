#include<iostream>
#include<deque>
using namespace std ;
int main()
{
    deque<int> d ;
    d.push_back(4) ;
    d.push_front(8) ;
    for(int i:d)
    {
        cout<<i ;
    }cout<<endl ;
    //Element deletion from back
    d.pop_back() ;
      for(int i:d)
    {
        cout<<i ;
    }cout<<endl ;
    cout<<" Size Before Erase :"<<d.size()<<endl ;
    d.erase( d.begin(),d.begin()+1) ;
    cout<<"Size After Erase :"<<d.size()<<endl ;

}
