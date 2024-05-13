#include<iostream>
using namespace std ;
int binary(int a[],int n,int k) ;
int main()
{
    int size,k;
    int arr[ size] ;
    cout<<"Enter Array size :" <<endl;
    cin>> size ;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element :"<<endl ;
        cin>>arr[i] ;
    }
    cout<<"Enter element to be search:"<<endl ;
    cin>>k ;
    int index= binary(arr,size,k);
    cout<<index<<endl ;
}
int binary(int a[],int n,int k)
{
    int mid;
    int start =0 ;
    int end =n;
    mid=(start+end)/2;
    while(start<=end)
    {
        if(a[mid]==k)
        return mid ;
        //Go to Right side in Array
        if(k>a[mid])
        {
            start=mid+1 ;
        }
        //Go to Left side in Array
        else
            end=mid-1;
        mid =(start+end)/2;
    }
    return 0 ;
}
