#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    //max heap
    priority_queue<int> maxi ;

    //min heap
    priority_queue<int,vector<int>,greater<int> > mini ;
    //max
    cout<<"MAX"<<endl;
    maxi.push(3) ;
    maxi.push(6) ;
    maxi.push(1);
    maxi.push(2) ;
    int n =maxi.size();
    cout<<"size ->"<<maxi.size()<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top() ;
        maxi.pop() ;
    }
    cout<<endl ;
    cout<<endl ;
    //mini
    cout<<"MINI"<<endl ;
     mini.push(5) ;
     mini.push(2) ;
     mini.push(6) ;
     mini.push(4) ;
     int t =mini.size();
    cout<<"size ->"<<mini.size()<<endl;
    for(int i=0;i<t;i++)
    {
        cout<<mini.top() ;
        mini.pop() ;
    }
    cout<<endl ;



}
