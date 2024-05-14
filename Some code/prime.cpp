#include<stdio.h>
#include<iostream>
using namespace std ;
int main ( )
{
    int n ;
    bool prime = true;
    cout << "Enter number :" ;
    cin >> n ;
    if (n<2)
        prime = false;
    for(int i=2;i<n/2+1;i++){
         if (n%i==0){
             prime = false;
            break;
        }
    }

    if (prime){
        cout<< n <<" is Prime Number";
    } else {
        cout<< n << " is not Prime Number";
    }
}
