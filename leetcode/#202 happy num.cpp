#include<iostream>
using namespace std ;
int sumofsq(int ) ;
bool happy(int ) ;
int main()
{
    int num ;
    cout<<"Enter num :" <<endl ;
    cin>>num ;
    int res = num ;
    if(res!=1)
    {
        res = happy(res) ;
    }
}
int sumofsq(int n )
{   int sum = 0 ;
    while(n>0)
    {
        int d= n%10 ;
        sum+=d*d ;
        n=n/10 ;
    }
    return sum ;
}
bool happy( int res)
{
    if(res==1)
        return true ;
    else
        return false ;
}
