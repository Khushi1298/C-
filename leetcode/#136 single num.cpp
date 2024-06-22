#include<iostream>
using namespace std ;
int main()
{
    int size , n ;
    cout <<"Enter size of Arry : "<<endl ;
    cin >> size ;
    int arr[size];
    cout<<"Enter elements : " <<endl ;
    for(int i=0 ;i<size ;i++)
    {
       cin>>arr[i] ;
    }
    int a =  0 ;
    for(int i=0;i<size;i++)
    {
        a^=arr[i] ;
    }cout<<endl ;
    cout<<a ;
}
