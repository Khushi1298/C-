#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n ;
    int t=n ;
    int b=0 ;
    int dig =1 ;
    int dec=0;
    cout<<"Enter Binary number :"<<endl ;
    cin>>n ;
    while(n>0)
    {
      int dig = n%2 ;
      dig*= pow(2,b);
      dec+=dig ;
      n=n/10 ;
      b++ ;
    }
    cout<<"DECIMAL : " <<dec ;
}
