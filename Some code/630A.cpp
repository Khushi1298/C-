#include<iostream>
using namespace std ;
int pow(int , int) ;
int main()
{
    int N,n ;
    int power ;
    cout << "Number : " <<endl ;
    cin>> N ;
    cout << "Power to be :"<<endl ;
    cin >>n ;
    power = pow(N,n) ;
    cout<<N<<" power of "<<n<<" is "<<power<<endl ;
    int result = power % 100 ;
        cout <<result ;
}
int pow(int A , int a)
{
    int i = 1;
    int pow =1;
    while (i<=a)
    {
       pow = pow*A ;
       i++ ;
    }
    return pow ;
}

