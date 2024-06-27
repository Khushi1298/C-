#include<iostream>
using namespace std ;
bool found(int arr[][5] ,int,int, int) ;
int main()
{
     int arr[5][5] ;
     int n ;
    cout<<"Enter elements :" ;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cin>>arr[i][j] ;
        }
    } cout<<endl ;
    cout<<" \t \t 2D Array " <<endl;
       for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }
    cout<<endl ;
    cout<<"Element to search : "<<endl ;
    cin>> n ;
    if( found(arr,n,3,3) )
    {
        cout<<"Element found " ;
    }
    else
        cout<<"Element not found " ;
}
bool found(int arr[][5],int target,int rows ,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
          if(target==arr[i][j])
            return 1;
        }
    }
    return 0 ;
}
