#include<iostream>
using namespace std;
 int main()
 {
    char ch;
    cout << "Enter the character : ";
    cin >> ch ;

    if(ch >= 'a' && ch<='z')
    {
        cout << "Lower case" << endl;
    }
    else{
        cout << "Upper case" << endl;
    }
    return 0;
 }