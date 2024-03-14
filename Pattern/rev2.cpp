
#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
    int i , j,k ;
    int n ;
    int t= n ;
    cout << " Enter n : ";
    cin >> n ;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
           for(k=n ; k>=i;k--)
            cout << k ;
           cout<< endl;
        }
        cout << endl;
    }
}

