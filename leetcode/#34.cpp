#include<iostream>
using namespace std ;
int target(int a[],int n,int t) ;
int main()
{
    int size,k;
    cout<<"Enter Array size :" <<endl;
    cin>> size ;
    int arr[ size] ;
    cout<<"Enter elements :"<<endl ;
    for(int i=0;i<size;i++)
        cin>>arr[i] ;
    cout<<"Enter Target :"<<endl ;
    cin>>k ;
    int result = target(arr,size,k) ;
    cout<<result ;

}
int target(int a[] ,int n , int t)
{
    int count = 0 ;
    for(int i=0 ;i<=n;i++)
    {
        if(a[i]==t)
        {
            return i ;
        }
    }
    return -1 ;
}
