#include<iostream>
using namespace std ;
int main()
{
    int i=1,n ;
    cout <<"Enter n : " ;
    cin >> n ;
    while(i<=n)
    {
        cout<< " X " ;
        n=n-i+1 ;
        i++ ;
    }
}
