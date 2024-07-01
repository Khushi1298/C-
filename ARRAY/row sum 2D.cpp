#include<iostream>
using namespace std ;
void sum(int** arr,int n,int m) ;
int main()
{
    int n,m;
    cout<<"Enter Array rows :" <<endl;
    cin>> n ;
    cout<<"Enter Array columns :" <<endl;
    cin>>m ;
    int arr[n][m] ;
    cout<<"Enter elements :"<<endl ;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j] ;
        }
    }
    cout<<endl ;
      cout<<" \t \t 2D Array " <<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }
}
void sum(int** arr,int n,int m)
{
    for (int i=0;i<n;i++)
    {   int add =0 ;
        for(int j=0;j<m;j++)
        {
            add+=arr[i][j] ;
        }
        cout<<"SUM of row "<<i<<" :"<<add ;
    }
    cout<<endl ;
}
