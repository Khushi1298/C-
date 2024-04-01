#include<iostream>
using namespace std ;
int facto (int) ;
int nCr (int , int ) ;
int main ()
{
    int n , r ;
    cout << "Enter n : " ;
    cin>> n ;
    cout << "Enter r :" ;
    cin>> r ;
    int  ncr = nCr(n,r) ;
    cout <<"Answer = "<<ncr ;
}
int facto(int n )
{
    int fact=1 ;
     while (n>=1)
    {
        fact= n*fact ;
        n-- ;
    }
    return fact ;
}
int nCr (int n ,int r)
{
    int  up = facto(n) ;
    int lw = facto(r)*facto(n-r) ;
    int ans =up/lw ;
    return ans ;
}







