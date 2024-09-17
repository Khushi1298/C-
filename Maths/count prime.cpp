#include<iostream>
using namespace std ;
bool isprime(int) ;
int main()
{
    int n=10 ;
    int count=0;
    for(int i=1;i<n;i++) //1-10 numbers
    {
       if (isprime(i))
       {
           count++ ;
       }
    }
    cout<< count ;
    return 0;
}
bool isprime(int n)
{
    if(n<2)
        return false ;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
          return false ;
    }
    return true ;
}
