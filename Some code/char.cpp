#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
    char in ;
    cout<<"Enter a Character : " ;
    cin >>in ;
    if((in>=97) && (in<=122))
        cout << "Char is Lower case ";
    else if ( (in>=65) && (in<=90))
        cout << "Char is UPPER Case" ;
    else if( (in>=48) && (in<=57))
        cout << "Char is Number";
    else
        cout <<"It may be a Symbol" ;

}
