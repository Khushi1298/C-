#include<stdio.h>
#include<iostream>
using namespace std ;
bool isprime(int) ;
int main ( )
{
    int n ;
    cout << "Enter number :" ;
    cin >> n ;
    bool prime =isprime(n) ;
      if(prime)
          cout<<n<<" is Prime number" ;
      else
        cout<<n<<" is not Prime number" ;

}
bool isprime(int n)
{   if (n<2)
       return false ;
    for(int i=2 ;i<n-1;i++)
         if (n%i==0)
            return false ;
  return true ;
}


