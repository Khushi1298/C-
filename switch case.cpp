#include<iostream>
using namespace std ;
int main()
{
   int num ;
   cout << "Enter number 1-10 :" ;
   cin>> num ;
   cout << endl ;
   switch (num)
   {
        case 1 : cout << "First" ; break ;
        case 2 : cout << "Second" ; break ;
        case 3 : cout << "Third" ; break ;
        case 4 : cout << "Fourth" ;break ;
        case 5 : cout << "Fifth" ;break ;
        case 6 : cout << "Sixth" ;break ;
        case 7 : cout << "Seventh" ;break ;
        case 8: cout << "Eighth" ;break ;
        case 9: cout << "Ninth" ;break ;
        case 10: cout << "Tenth" ;break ;
        default : cout << "Not a Valid number" ;
   }
}
