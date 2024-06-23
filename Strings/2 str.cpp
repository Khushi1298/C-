#include<iostream>
using namespace std ;
int main()
{
    string A , B ; ;
    cin>>A ;
    cin>>B ;
    cout<<A << " " <<B ;
    cout<<endl ;
     int n=A.length();
     int t=B.length();
    for(int i=0 ;i<n;i++)
    {
        if(i==0)
        {
          cout<<"FIRST of A :"<<A[i] ;
        } cout<<endl ;
        cout<<A[i];
    } cout<<endl ;
    cout<<"Last alpha of a : "<<A[n-1]<<endl  ;
        for(int i=0 ;i<t;i++)
    {
        if(i==0)
        {
            cout<<"FIRST of B :"<<B[i];
        } cout<<endl ;
        cout<<B[i];
    } cout<<endl ;
    cout<<"Last alpha of b : "<<B[t-1]<<endl  ;
}
