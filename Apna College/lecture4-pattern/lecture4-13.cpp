// This pattern draw the number in square like this :
//  F E D C B A 
//  E D C B A 
//  D C B A 
//  C B A 
//  B A 
//  A 


#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    char ch='A';

    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=n;i>=0;i--)
    {
        for(ch='A'+i;ch>='A';ch--)
        {
            cout << ch << " ";
        
        }
    cout << endl;
    }
    return 0;
}