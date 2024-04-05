#include<iostream>
using namespace std ;
int main()
{
    int a = 0 ;
    int b = 1 ;
    int n ,next;
    cout <<"Enter n : " ;
    cin >> n ;
    cout << a <<  endl << b <<endl;
    for (int i =1 ;i<=n-1 ; i++)
    {   next = a+b   ;
         cout <<next;
         a=b ;
         b=next ;
        cout << endl ;
    }
}
