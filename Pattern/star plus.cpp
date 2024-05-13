#include<iostream>
using namespace std ;
int main()
{
  int n ;
  cout <<"Enter n:"<<endl ;
  cin>> n ;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          int a= n/2 ;
          if((i==a) ||(j==a))
            cout<<"*" ;
          else
            cout<<" " ;
      }
      cout<<endl ;
  }
}
