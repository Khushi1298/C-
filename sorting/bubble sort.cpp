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
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<(size-i);j++)
        {
            if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]) ;
        }
    }
    for(int i=0;i<size;i++)
       {
           cout<<arr[i]<<" " ;
       }
}
