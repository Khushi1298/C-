#include<iostream>
using namespace std ;
int first(int a[],int n,int k) ;
int last(int a[],int n,int k) ;
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
    cout <<"First occurrence of "<<k<<" is "<<first(arr,size,k)<<endl;
    cout <<"last occurrence of "<<k<<" is "<<last(arr,size,k);
    return 0 ;
}
int first(int a[],int n,int k)
{   int ans =-1 ;
    int start =0 ;
    int end =n-1;
    while(start<=end)
    {
        int mid=start +(end-start)/2 ;
        if(a[mid]==k)
        {
           ans = mid ;
           end = mid -1 ;

        }
        //Go to Right side in Array
        if(k>a[mid])
            start=mid+1 ;
        //Go to Left side in Array
        else
            end=mid-1;
        //mid =start +(end-start)/2;
    }
    return ans ;
}
int last(int a[],int n,int k)
{   int ans =-1 ;
    int start =0 ;
    int end =n-1;
    //int mid=(start+end)/2;
    while(start<=end)
    {
        int mid=start +(end-start)/2 ;
        if(a[mid]==k)
        {
            ans = mid ;
            start = mid+1 ;
        }
        //Go to Right side in Array
        if(k>a[mid])
            start=mid+1 ;
        //Go to Left side in Array
        else
            end=mid-1;
        // mid =start +(end-start)/2;
    }
    return ans ;
}

