#include <iostream>
using namespace std ;
int main()
{
    int arr[9]={1,2,34,3,4,5,7,23,12} ;
    int count = 0 ;
    for(int i=0;i<9;i++)
    {
        if(arr[i]%2==1) //odd
        {
            count++;
            cout<<count<<" "<<i<<endl  ;
            if(count==3)
                break ;
        }
        else
            count =0 ;
    }
    if(count==3)
        cout<<"YES, Array have three consecutive odds" ;
    else
        cout<<"NO" ;
}
