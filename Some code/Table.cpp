#include<iostream>
using namespace std ;
int main()
{
    int i,n ;
    int mul ;
    cout <<"Enter n : " ;
    cin >> n ;
    for (i=1 ; i<=10; i++)
    {
       mul = i*n;
       cout<< n<<" x "<<i<<" = "<<mul <<endl ;
    }
}
