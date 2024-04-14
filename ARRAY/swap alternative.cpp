#include<iostream>
using namespace std ;
void swap(int arr[],int n)
{
    for(int i=0 ;i<n;i+=2)
    {
        if(i+1<n)
        swap(arr[i],arr[i+1]) ;
    }
}
void print(int arr[],int n)
{
       for(int i=0 ;i<n ;i++)
            cout <<arr[i]<<" " ;
        cout <<endl ;
}
int main()
{
    int a[5] = {2,5,6,7,3} ;
    int b[8] ={3,6,7,8,2,1,4,9} ;
    swap(a,5) ;
    swap(b,8) ;
    print(a,5) ;
    print(b,8) ;
}

