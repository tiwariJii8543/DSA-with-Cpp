#include<iostream>
#include<fstream>
using namespace std;

// there are two ways to open a file
// 1. Using the constructor
// 2. Using the member function open() of the class

int main(){
    string strIn="Hello My Name is Harsh Tiwari";
    string strOut;

// opening file using constructor and writing it...
    // ofstream Book("Book.txt");
    // Book<<strIn;

// opening file using constructor and reading it...
    ifstream Bookread("Book.txt");
    // Bookread>>strOut;
    getline(Bookread,strOut);
    getline(Bookread,strOut);
    getline(Bookread,strOut);
    cout<<strOut;
    Bookread.close();
}