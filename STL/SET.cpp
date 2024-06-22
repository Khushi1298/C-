#include<iostream>
#include<set>
using namespace std ;
int main()
{
    set<int> s ;
    s.insert(7) ;
    s.insert(0) ;
    s.insert(4) ;
    s.insert(6) ;
    cout<<"SIZE ->"<<s.size() <<endl ;
    for(auto i: s )
    {
        cout<<i<<" "  ;
    }
    cout<<endl<<endl  ;
    cout<<"NEW SET"<<endl ;
    set<int> t ;
    t.insert(7) ;
    t.insert(8) ;
    t.insert(5) ;
    t.insert(9) ;
    t.insert(7) ;
    t.insert(0) ;
    t.insert(5) ;//can't store same value
     for(auto i: t)
    {
        cout<<i<<" "  ;
    }
    cout<<endl;
    cout<<"SIZE ->"<<t.size() <<endl ;
    cout<<endl ;
    t.erase(t.begin());
      for(auto i: t)
    {
        cout<<i<<" "  ;
    }
    cout<<endl ;
}
