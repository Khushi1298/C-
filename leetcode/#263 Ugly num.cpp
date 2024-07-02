#include<iostream>
#include<math.h>
using namespace std ;
void primeFactors(int n) ;
bool uglynum(int i ) ;
int main()
{
    int num ;
    cout<<"Enter number :" <<endl ;
    cin>>num ;
    primeFactors(num) ;
    if (uglynum(num))
       cout << "The number is ugly." << endl;
    else
        cout << "The number is not ugly." << endl;
    return 0;
}
void primeFactors(int n)
{
    cout<<"Factors : " ;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    if (n > 2)
        cout << n << " ";
    cout<<endl ;
}
bool uglynum(int i)
{
    if (i <= 0) {
        return false;
    }
    while (i % 2 == 0) {
        i /= 2;
    }
    while (i % 3 == 0) {
        i /= 3;
    }
    while (i % 5 == 0) {
        i /= 5;
    }
    return (i == 1);
}
