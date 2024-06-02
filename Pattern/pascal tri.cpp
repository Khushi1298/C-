#include<iostream>
using namespace std ;
int facto(int) ;
int nCr(int,int) ;
//pascal triangle..
int main()
{
    int i , j,n ;
    cout<<"Enter n :" <<endl ;
    cin>> n ;
    for(int i =0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
             int  ncr = nCr(i,j) ;
             cout <<ncr<<" " ;
        }
        cout<<endl ;
    }
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
//n=i,r=j
int nCr (int n ,int r)
{
    int  up = facto(n) ;
    int lw = facto(r)*facto(n-r) ;
    int ans =up/lw ;
    return ans ;
}
