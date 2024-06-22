#include<iostream>
#include<map>
using namespace std ;
int main()
{
    map<int,string> m ;
    m[1]="atul" ;
    m[2]="prasad" ;
    m[3]="agarwal" ;
    for(string i:m)
    {
        cout<<i.first<<endl ;
    }
}
