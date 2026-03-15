// This pattern draw the number in square like this (Floyd's Triangle):
//  1111
//   222
//    33
//     4


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
        for(j=0;j<i;j++)
        {
            cout << " ";
        }
        for(j=0;j<n-i;j++)
        {
            cout << (i+1);
        }
    cout << endl;
    }
    return 0;
}