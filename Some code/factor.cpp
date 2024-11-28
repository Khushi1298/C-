//Find the factor
#include<iostream>
using namespace std ;
int iseven(int);
int isodd(int) ;
int main()
{
    int n;
    cout <<"Enter number :" ;
    cin>>n ;
    while(n>1)
    {
       if(n%2==0)
          n= iseven(n) ;
       else
        n =isodd(n) ;
    }
    return 0;
}
int iseven(int n)
{
        n=n/2;
        cout<<n<<" " ;
    return n ;
}
int isodd(int n)
{
       for(int i = 3; i<= n; i+= 2)
       {
        if(n % i == 0)
        {
            n = n / i;
            cout << "Dividing by " << i << ": " << n << endl;
            break;
        }
    return n;
}
}
