#include <iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"Enter Array size :" <<endl;
    cin>>size ;
    int arr[size] ;
     cout<<"Enter elements :"<<endl ;
   for(int i=0;i<size;i++)
    {
        cin>>arr[i] ;
    }
    int min ;
    for(int i=0;i<(size-1);i++)
    {     min = i ;
        for(int j= i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
                min =j ;
        }
        swap(arr[min],arr[i]);
    }
       for(int i=0;i<size;i++)
       {
           cout<<arr[i]<<" " ;
       }
}


