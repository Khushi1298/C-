#include<iostream>
using namespace std ;
int main ()
{
    int n , i=0,sum =0 ;
    cout << "Enter number :" ;
    cin >> n ;
    while(i<=n)
    {
        if(i%2==0)
          sum=sum+i ;
        i++ ;
    }
    cout <<"Sum of Even no :" << sum ;
}
