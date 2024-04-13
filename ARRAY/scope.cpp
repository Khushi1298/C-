#include<iostream>
using namespace std ;
void update(int arr[],int n) ;
int main()
{
    int arr[3] ={1,2,3} ;
    cout<<"Before update"<<endl ;
    for(int i=0 ;i<3;i++)
        cout <<arr[i]<<endl ;
    update(arr, 3);
    cout<<"Main Function"<<endl  ;
    for(int i=0 ;i<3;i++)
        cout <<arr[i]<<endl ;
        return 0 ;
}
  void  update(int arr[],int n)
{
    arr[0] =120 ;
     cout << "In the update Fun" <<endl;
     for(int i=0 ;i<n;i++)
        cout <<arr[i]<<endl ;
}
