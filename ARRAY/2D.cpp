#include<iostream>
using namespace std ;
int main()
{
    int arr[5][5] ;
    cout<<"Enter elements :" ;
    //row wise
     for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cin>>arr[i][j] ;
        }
    }
    cout<<"output :"<<endl ;
        for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }
    cout<<endl ;
    //col wise
    cout<<"Enter elements :" ;
         for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          cin>>arr[j][i] ;
        }
    }
    cout<<"output :"<<endl ;
        for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }
    cout<<endl ;
    //initialization
    cout<<"output :"<<endl ;
    int a[3][4] ={ {2,2,2,2},{3,3,3,3},{4,4,4,4} } ;
            for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" " ;
        }
        cout<<endl ;
    }
}
