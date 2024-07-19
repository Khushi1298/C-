#include<iostream>
using namespace std ;
int main()
{
    int m ;
    cout<<"Enter Marks : " ;
    cin>>m ;
    if(m>80 && m<100)
        cout<<"A Grade" ;
    else if(m>60 && m<80)
        cout<<"B Grade" ;
    else if(m>40 && m<60)
        cout<<"C Grade" ;
    else if(m<=40)
        cout<<"FAIL" ;
    else
        cout<<"invalid" ;
}
