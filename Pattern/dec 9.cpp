#include<iostream>
using namespace std ;
int main()
{
    int i , j ;
    for(i=1;i<=15;i++)
    {    int n =i ;
        for(j=1;j<=i;j++)
          {
                cout<<" "<<n<<" " ;
                n--;
          }

        cout<<endl ;
    }
}


