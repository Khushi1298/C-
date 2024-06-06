#include<iostream>
using namespace std ;
int pivot(int arr[], int n) ;
int main()
{
    int size ;
    cout<<"Enter size of array : "<<endl ;
    cin>>size ;
   int arr[size] ;
   cout<<"Enter elements in sorted and rotated :"<<endl ;
   for(int i=0;i<size;i++)
   {
       cin>>arr[i] ;
   }
   cout<<"Pivot element : "<<pivot(arr,size) ;
}
int pivot(int arr[],int n)
{
    int s=0 ;
    int e=n-1;
    int mid = s+((e-s)/2) ;
    while(s<e)
    {
       if(arr[mid]>=arr[0])
       {
           s=mid+1;
       }
       else{
          e=mid ;
       }
         mid = s+((e-s)/2) ;
    }
    return s ;
}
