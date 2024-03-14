#include<iostream>
using namespace std ;
int main()
{
    int i , j, n ;
    cout << " Enetr n : " ;
    cin>> n ;
    for(i=1;i<=n;i++)
    {
        int space=n-1 ;
        while(space)
        {
          cout<< " " ;
            space-- ;
        }
        for(j=1;j<=i;j++)
        {
            cout<<" X " ;
        }
        cout << endl ;
    }
}
