#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout << "Enter the age : ";
    cin >> n;
    if(n>=18)
    {
        cout << "You are elligible for the licence" ;
    }
    else
    {
        cout << "You are not elligible for the licence" ;
    }
    return 0;
 }