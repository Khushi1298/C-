#include<iostream>
using namespace std ;
int pivot(int[] , int ) ;
int main()
{
    int size , result  ;
    cout <<"Enter size of Arry : "<<endl ;
    cin >> size ;
    cout<<"Enter elements : " <<endl ;
      int arr[size];
    for(int i=0 ;i<=size ;i++)
        cin>>arr[i] ;
     result =  pivot(arr,size) ;
       cout <<"result : " << result ;
}
int pivot (int a[], int n)
{
      int mid;
    int start =0 ;
    int end =n-1;
    mid= start+(end-start)/2;
    while(start<end)
    {
        if(a[mid]>= a[0])
         start = mid+1 ;
        else
            end = mid ;
          mid = start + (end-start)/2 ;
    }
    return start ;
}

