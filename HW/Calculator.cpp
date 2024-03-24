#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    char op  ;
    cout << "Enter a : "<<endl ;
    cin >> a ;
    cout << "Enter b :" <<endl;
    cin>> b ;
    cout<<"Enter Arithmetic Operator : "<<endl ;
    cin >> op ;
    switch(op)
    {
        case '+' : cout << a<<"+"<<b<<"="<<a+b ; break ;
        case '-' : cout << a<<"-"<<b<<"="<<a-b ; break ;
        case '*' : cout << a<<"*"<<b<<"="<<a*b ; break ;
        case '/' : cout << a<<"/"<<b<<"="<<a/b ; break ;
        case '%' : cout << a<<"%"<<b<<"="<<a%b ; break ;
        default: cout << "Not Valid" ;
    }
}
