#include<iostream>
using namespace std ;
int sum(int arr[] , int size) ;
int main()
{
    int size ;
    cout<<"Enter size : "<<endl  ;
    cin>>size ;
    int arr[size] ;
    cout<<"Enter elements : " <<endl ;
    for(int i=0 ;i<size;i++)
       cin>> arr[i] ;
    int Sum = sum(arr,size) ;
    cout << "Sum of Elements : "<<Sum ;

}
// Sum of all elements in the array .....
int sum(int arr[] , int size)
{
    int sum = 0 ;
     for(int i=0 ;i<size;i++)
       sum =sum + arr[i] ;
    return sum ;
}
