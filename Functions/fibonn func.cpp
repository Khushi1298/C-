#include<iostream>
using namespace std ;
int fibonacci(int) ;
int main()
{
    int n ;
    cout <<"Enter n : " ;
    cin >> n ;
    int fib =fibonacci(n) ;
}
int fibonacci(int n)
{
    int next ;
    int a = 0 ;
    int b = 1 ;
     cout << a <<  endl << b <<endl;
    for (int i =1 ;i<=n-1 ; i++)
    {   next = a+b   ;
         cout <<next;
         a=b ;
         b=next ;
        cout << endl ;
    }
}

