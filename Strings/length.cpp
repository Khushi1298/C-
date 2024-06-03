#include<iostream>
using namespace std;
int length(char[]) ;
int main()
{
    char name[10] ;
    cout << "Enter Name : " << endl;
    cin >> name;
     length(name) ;
}
int length(char c[])
{
    int i;
    int ans = 0 ;
    for(i=0;c[i]!='\0';i++)
    {
       ans+=1 ;
    }
    cout<<"length is : " <<ans ;
}
