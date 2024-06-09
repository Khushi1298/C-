#include<iostream>
#include<array>
using namespace std ;
int main()
{
    array<int,4> a={1,2,6,7};
    int size =a.size() ;
    cout<<"Array size : " <<size<<endl ;
    for(int i=0;i<size;i++)
    {
        cout<<a[i] ;
        cout<<endl ;
    }
    cout<<"Element at index 3 : "<<a.at(3)<<endl ;
    cout<<"Empty or Not : "<<a.empty()<<endl ;
    cout<<"First element : "<<a.front()<<endl ;
    cout<<"Last element : "<<a.back()<<endl ;
}
