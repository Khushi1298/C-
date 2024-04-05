#include<iostream>
using namespace std ;
int main()
{      int n,t ;
        cout << "Enter number :" ;
        cin >> n ;
        int digi , pro=1,sum=0;
        while(n>0)
        {
            digi=n%10 ;
            pro = pro * digi ;
            sum = sum + digi ;
            n=n/10 ;
        }
        cout << "Pro : " << pro<<endl ;
        cout << "Sum : " << sum <<endl ;
        cout << "Answer : " << pro - sum ;
        return 0 ;
    }
