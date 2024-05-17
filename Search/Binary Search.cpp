#include<iostream>
using namespace std ;
int binary(int a[],int n,int k) ;
int main()
{
    int size,k;
    cout<<"Enter Array size :" <<endl;
    cin>> size ;
    int arr[ size] ;
    cout<<"Enter elements :"<<endl ;
    for(int i=0;i<size;i++)
        cin>>arr[i] ;
    cout<<"Enter element to be search:"<<endl ;
    cin>>k ;
    int index= binary(arr,size,k);
    cout<<"element position "<<index<<endl ;
    return 0 ;
}
int binary(int a[],int n,int k)
{
    int mid;
    int start =0 ;
    int end =n-1;
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
    return -1 ;
}
