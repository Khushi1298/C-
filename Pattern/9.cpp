#include<iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    int space ;
    for (int i =1 ; i<=n ; i++)
    {
         space = n-i ;
          while(space)
          {
             cout << " " ;
              space-- ;
          }
           for (int j =1 ; j<=i ; j++)
          {
             cout << " x " ;
          }
          cout << endl ;
    }
}
