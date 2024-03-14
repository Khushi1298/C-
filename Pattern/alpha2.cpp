
#include<iostream>
using namespace std ;
int main()
{
    int i , j , n=0;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=5;j++)
        {
            char ch= 'A'+n;
            cout << " "<<ch<<" " ;
            n++ ;
        }
        cout << endl ;
    }
}
