// This pattern draw the number in square like this (Floyd's Triangle):
//  1
//  2 3 
//  4 5 6 
//  7 8 9 10 


#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    int num=1;
    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout << num << " ";
            ++num;
    
        }
    cout << endl;
    }
    return 0;
}