#include<iostream>
using namespace std ;
int main()
{
    int i , j, n ;
    cout << " Enetr n : " ;
    cin>> n ;
    for(i=1;i<=n;i++)
    {
        int space=n-i ;
        while(space)
        {
          cout<< " " ;
            space-- ;
        }
        for(j=1;j<=i;j++)
        {
            cout<<" X" ;
        }
        cout << endl ;
    }
}
