// This pattern draw the number in square like this (Floyd's Triangle):

//  A
//  B C
//  D E F 
//  G H I J


#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    char ch='A';
    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout << ch << " ";
            ++ch;
    
        }
    cout << endl;
    }
    return 0;
}