#include<stdio.h>
#include <iostream>
using namespace std ;
int main()
{
   int a ;
    cout << "Enter a :" <<endl ;
    cin >> a ;
    if(a>0)
        cout<< "a is Positive number" ;
    else if (a==0)
        cout << "a is Zero";
    else
        cout<<"a is negative number" ;
}
