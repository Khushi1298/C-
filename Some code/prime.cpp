#include<stdio.h>
#include<iostream>
using namespace std ;
int main ( )
{
    int n ;
    cout << "Enter number :" ;
    cin >> n ;
    for(int i=1 ;i<n;i++)
    {
         if (n%i!=0)
           cout<< n <<" is Prime Number for " <<i<< endl ;
        else
             cout<< n << " is non prime number for "<< i <<endl ;
    }
}
