#include<iostream>
using namespace std ;
int main()
{
    int arr[5]={3,5,6,2,1} ;
    int n ;
    cout<<"Enter n :" ;
    cin>>n ;
    int count=0 ;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            count=0 ;
            break;
        }
        else
            count++ ;
    }
    if(count==0)
        cout<<"Element found" ;
    else
        cout<<"Element not found" ;
}
