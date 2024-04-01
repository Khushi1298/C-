#include<iostream>
using namespace std ;
int main ()
{
    int n,fact=1 ;
    cout << "Enter n :" ;
    cin >> n ;
    while (n>=1)
    {
        fact= n*fact ;
        cout << n ;
        n-- ;
    }
    cout << endl ;
    cout << fact ;
}
