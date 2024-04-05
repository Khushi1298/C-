#include<iostream>
using namespace std ;
int main()
{
    int a =1 ;
    int b = 2;
    cout << a-- << endl;
    cout << ++b<< endl ;
    if( a-->0 || ++b>2)
        cout << "Stage 1 " ;
    else
        cout << "Stage 2 " << endl ;
cout << a << " " << b << endl ;
return 0;
}
