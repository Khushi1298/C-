#include<iostream>
using namespace std ;
int AP(int) ;
int main()
{
    int n ;
    cout <<"Enter n : " ;
    cin >> n ;
    int AAp = AP(n) ;
    cout<<"AP = "<<AAp ;
}
int AP(int n )
{
    int ap =(3*n+7) ;
    return ap ;
}
