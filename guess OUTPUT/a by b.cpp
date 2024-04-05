#include<iostream>
using namespace std ;
int update(int) ;
int main()
{
    int n=15 ;
    cout <<"Num = "<<n<<endl ;
    update(n) ;
}
int update(int n)
{
    n= n/2;
    cout <<"Number = "<<n<<endl ;
}

