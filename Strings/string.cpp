#include<iostream>
#include <string>
#include <sstream>
using namespace std ;
int main()
{
    string s ;
    cout<<"Enter String :"<<endl ;
    getline(cin,s) ;
    cout<<"String : "<<s <<endl ;
    cout<<endl ;

    // Use string stream to break the string into words
    stringstream ss(s);
    string word;
    cout << "Words in the string: " << endl;
    while (ss >> word) {
        cout << word << endl;
    }
    cout<<endl ;

    //Length of every word
    ss.str(s); // Reset the string stream to the original string
    ss.clear(); // Clear any error flags
    cout << " Length of Words in the string: " << endl;
    while (ss >> word) {
        cout << word <<" -> "<<word.length() << endl;
    }
}

