#include<iostream>
using namespace std ;
int main()
{
    int i , j ;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            char ch ='A'+j;
            cout << ch ;
        }
        cout << endl;
    }
}
