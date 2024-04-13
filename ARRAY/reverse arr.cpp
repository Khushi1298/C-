#include<iostream>
using namespace std ;
void reverse(int arr[],int n)
{
    int start=0 ;
    int end = n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]) ;
        start++ ;
        end-- ;
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
    reverse(a,5) ;
    reverse(b,8) ;
    print(a,5) ;
    print(b,8) ;
}
