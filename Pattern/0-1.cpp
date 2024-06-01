#include<iostream>
using namespace std ;
int main()
{
    int i , j ;
    for(i=1;i<=6;i++)
    {
       for(j=1;j<=i;j++)
       {
           int n = i+j ;
           if(n%2==0)
             cout<<"1" ;
           else
            cout <<"0" ;
       }
       cout<<endl  ;
    }
}
