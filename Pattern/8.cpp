#include<iostream>
using namespace std ;
int main()
{
    int i=1 , j ;
    for(i=1;i<=5;i++)
    {  int n = i ;
        for(j=1;j<=i;j++)
        {
            cout <<" "<<n<<" ";
            n++ ;
        }
        cout<<endl ;
    }
}
