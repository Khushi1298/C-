#include<iostream>
using namespace std ;
int sumofsq(int n ) ;
bool happy(int n) ;
int main()
{
    int num ;
    cout<<"Enter num :" <<endl ;
    cin>>num ;
    sumofsq(num) ;
    happy(num) ;
}
int sumofsq(int n )
{   int sum = 0 ;
    while(n>0)
    {
        int d= n%10 ;
        sum+=d*d ;
        n=n/10 ;
    }
}
bool happpy( int n)
{
    if(n==1)
        return true ;
    else
        return false ;
}
