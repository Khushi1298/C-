#include<iostream>
using namespace std ;
int main()
{
    //watermelon problem
    int n ;
    // weight of wmelon is n
    cout<<"Enter n : " ;
    cin >> n ;
    if(n==2)
        cout<<"NO" ;
    else if (n%2==0)
        cout <<"YES";
    else
        cout<<"NO" ;
}
