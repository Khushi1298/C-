#include <iostream>
using namespace std ;
int main()
{
    int a , b ;
    cout << "Enter a :" <<endl ;
    cin >> a ;
    cout <<"Enter b : " <<endl ;
    cin >> b ;
    if(a>b)
        cout<< "a is greater than b" ;
     else if (a==b)
        cout << "a is equals to b";
    else
        cout<<"b is greater than a" ;
}
