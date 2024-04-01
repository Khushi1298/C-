
#include<iostream>
using namespace std ;
int counting (int,int) ;
int main()
{
    int a ,b ;
    cout<<"Starting num:" ;
    cin >> a ;
    cout <<"End num:" ;
    cin>> b ;
    counting(a,b) ;
}
int counting (int n , int m )
{
    for(int i=n;i<=m;i++)
    {
         cout << i<<" " ;
        if(i%10==0)
            cout<<endl ;
    }
}
