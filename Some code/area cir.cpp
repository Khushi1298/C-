#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    float A , r ;
    cout<<" \t Area of Circle" <<endl ;
    cout<<"Enter radius : "<<endl ;
    cin >>r ;
    float pie = 3.1415 ;
    A = pie*( pow(r,2) ) ;
    cout << "Area ->"<<A ;
}
