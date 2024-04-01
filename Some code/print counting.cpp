#include<iostream>
using namespace std ;
int counting (int) ;
int main()
{
    int n ;
    cout<<"NUMBER Range :" ;
    cin >> n ;
    counting(n) ;
}
int counting (int n )
{
    for(int i=1;i<=n;i++)
    {
        cout << i<<" " ;
    }
    cout <<endl ;
}
