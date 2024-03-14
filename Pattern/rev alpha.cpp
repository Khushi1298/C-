
#include<iostream>
using namespace std ;
int main()
{
    int i , j ;
    for(i=1;i<=5;i++)
    {    char n = '1' ;
        for(j=1;j<=i;j++)
        {
            char ch= 'D'+i-1;
            cout << " "<<ch<<" " ;
            n-- ;
        }
        cout << endl ;
    }
}
