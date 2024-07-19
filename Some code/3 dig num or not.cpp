#include <iostream>
using namespace std ;
int main()
{
    int n ;
    int count = 0 ;
    cout<<"Enter number :" ;
    cin>> n ;
    while(n>0)
    {
        int dig =n%10 ;
        n=n/10 ;
        count++ ;
    }
    if(count == 3)
        cout<<"3 digit number " ;
    else
        cout<<"not 3 digit number " ;
}
