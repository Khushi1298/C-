#include<iostream>
using namespace std ;
int main ()
{
    int arr[5][5] ;
    int count = 0 ;
    //Enter elements
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>> arr[i][j] ;
        }
    }
    if(arr[3][3]==1)
        cout << count ;
    else
    {
        for(int i=1;i<=3;i++)
        {
            swap(arr[i],arr[i+1]);
            count ++ ;
        }
        for(int j=1;j<=3;j++)
           {
             swap(arr[j],arr[j+1]);
             count ++ ;
            }
    }
    cout<< count ;
}







