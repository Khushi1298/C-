#include<iostream>
using namespace std ;
int  search(int arr[],int size , int n)
{
        //Searching start from index 0
    for(int i=0 ;i<size ;i++)
    {
        if (arr[i]==n)
            return i ;
    }
    return -1;
}
int main()
{
    int size , n ;
    cout <<"Enter size of Arry : "<<endl ;
    cin >> size ;
    cout<<"Enter elements : " <<endl ;
      int arr[size];
    for(int i=0 ;i<size ;i++)
        cin>>arr[i] ;
        // number search in array
    cout << "Enter number : "<<endl ;
    cin >> n ;
    int  found =search(arr,size,n) ;
        if(found!=-1)
         cout<<"Element found at Position :"<<found <<endl ;
        else
                cout <<"Not Found " ;
}











