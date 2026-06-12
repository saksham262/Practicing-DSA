// This pattern draw the number in square like this : (for n = 5)
//   A
//   B B 
//   C C C 
//   D D D D    
//   E E E E E

#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    char ch='A';
    
    cout << "Enter the n number for the column : ";
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout << ch << " ";
        }
        ++ch;
    cout << endl;
    }
    return 0;
}