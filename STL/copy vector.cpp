#include<iostream>
#include<vector>
using namespace std ;
int main()
{
        vector<int>a(4,5) ;
    cout<<"VECTOR a"<<endl ;
        for(int i:a)
    {
        cout<<i<<" " ;
    }cout<<endl ;
    //copy of a
    vector <int> last(a) ;
        cout<<"VECTOR last"<<endl ;
        for(int i:last)
    {
        cout<<i<<" " ;
    }
}
