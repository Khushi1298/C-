#include <iostream>
using namespace std ;
bool evenodd (int) ;
int main ()
{
    int num , evnodd;
    cout << "Enter number :" ;
    cin >> num ;
    evnodd = evenodd(num) ;
    cout << evnodd ;
}
bool evenodd (int a )
{
    if (a%2==0)
        return 0 ; //Even
    else
        return 1 ; //Odd
}
