// Normal form of array the marks was enter by user and show on hte diplay.

#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int marks[5];

    //For input the value of array
    for(int i=0;i<size;i++)
    {
        cout << "Enter the marks : " << endl;
        cin >> marks[i];
    }

    cout << endl;
    
    cout << "The marks which was entered by you is : " << endl;

    cout << endl;
    //For output or show the value of array
    for(int i=0;i<size;i++)
    {
        cout << "The marks of " << i+1 << " subject is" << endl;
        cout << marks[i] << endl;
    }
    return 0;
}