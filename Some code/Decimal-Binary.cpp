#include<iostream>
using namespace std ;
int main ()
{
    int  binary , n,digit ,ans = 0;
    cout <<"Enter Decimal number : " ;
    cin >> n ;
    while (n>0)
    {
        digit = n%2 ;
        cout << digit ;
        n=n/2;
    }
    cout << endl
    while(digit>0)
    {
        binary = digit%10 ;
        ans = (ans*10)+binary ;
        digit = digit / 10 ;
        cout << ans ;
    }
}
