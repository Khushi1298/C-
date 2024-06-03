#include<iostream>
using namespace std;
int length(char[]) ;
void rev(char[],int) ;
int main()
{
    char name[10] ;
    cout << "Enter Name : " << endl;
    cin >> name;
    cout<<name <<endl;
    int ans = length(name) ;
    cout<<"length is : " <<ans<<endl ;
     rev(name,ans) ;
     cout<<"Reverse name :"<<name ;
}
int length(char c[])
{
    int i;
    int length= 0 ;
    for(i=0;c[i]!='\0';i++)
    {
       length+=1 ;
    }
    return length ;
}
void rev(char str[],int n)
{
    int s =0 ;
    int e =n-1 ;
    while(s<e)
    {
       swap(str[s++],str[e--]) ;
    }
}
