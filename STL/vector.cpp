#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>v ;
    cout<<"Capacity-> " <<v.capacity()<<endl ;
    cout<<"SIZE-> " <<v.size()<<endl ;

    v.push_back(1) ;
    cout<<"Capacity-> " <<v.capacity()<<endl ;

    v.push_back(2) ;
    cout<<"Capacity->" <<v.capacity()<<endl ;

    v.push_back(3) ;
    cout<<"Capacity-> " <<v.capacity()<<endl ;
    cout<<"SIZE-> " <<v.size()<<endl ;

    v.push_back(4) ;
    cout<<"Capacity-> " <<v.capacity()<<endl ;

    v.push_back(7) ;
    cout<<"Capacity-> " <<v.capacity()<<endl ;
    cout<<"SIZE-> " <<v.size()<<endl ;
    cout<<"\n" ;

    cout<<"Element at 2nd index :"<<v.at(2)<<endl ;
    cout<<"First element :"<<v.front()<<endl ;
    cout<<"Last element :"<<v.back()<<endl ;
    cout<<"\n" ;

    //POP and PUSH
    cout<<"Before pop"<<endl ;
    for(int i:v)
    {
        cout<<i<<" " ;
    }
    cout<<endl ;
    v.pop_back() ;
    cout<<"After pop"<<endl ;
        for(int i:v)
    {
        cout<<i<<" " ;
    }
    cout<<endl ;


}
