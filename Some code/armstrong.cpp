#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
    int n;
    int sum=0 ;
    cout<<"Enter number:" <<endl ;
    cin>>n ;
     int t = n ;
    while(n>0)
    {
        int digit = n%10 ;
        sum+=pow(digit,3) ;
         n=n/10 ;
    }
         if(t==sum)
            cout<<"ARMSTRONG NUMBER" ;
         else
            cout<<"NUMBER IS NOT ARMSTRONG" ;
}
