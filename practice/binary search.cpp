#include<iostream>
using namespace std ;
int main()
{
    int arr[5]={2,3,6,8,9} ;
    int n ;
    cout<<"Enter n :" ;
    cin>>n ;
    int start =0 ;
    int end=4;//n-1
    for(int i=0;i<5 ;i++)
    {
        int mid=(start+end)/2;
        if(arr[mid]==n)
        {
            cout<<"Element found" ;
            break;
        }
        else if(arr[mid]>n)
        {
            end=mid-1;
        }
        else if(arr[mid]<n)
        {
            start=mid+1;
        }
    }
    if(start>end)
        cout<<"Element not found" ;
}
