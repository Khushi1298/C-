#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
    int i , j ;
    int n ;
    cout << " Enter n : ";
    cin >> n ;
    for (i=1;i<=n;i++)
    {    char ch='A'+n-i ;
        for (j=1;j<=i;j++)
        {
           cout <<" "<< ch<<" ";
               ch++ ;
        }
        cout << endl;
    }
}


