#include<iostream>
using namespace std ;
int nCr (int , int ) ;
int main ()
{
    int n , r ;
    int ncr ;
    cout << "Enter n : " ;
    cin >> n ;
    cout << "Enter r :"  ;
    cin >> r ;
    ncr = nCr(n,r) ;
    cout << "nCr :"<<ncr ;
}
    int nCr (int a , int b )
    {
            int fact = 1 ;
            int afac , bfac ;
         while (a>0 )
        {
             afac = a*fact ;
             a-- ;
             cout << afac <<endl ;
        }
        while(b>0)
        {
             bfac = b*fact ;
             b-- ;
             cout << bfac <<endl ;
        }
        cout << afac <<bfac ;
       int  nCr = a/(b*(a-b)) ;
        return nCr ;
    }









