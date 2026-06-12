// This pattern draw the number in square like this :
//   1
//   2 2 
//   3 3 3 
//   4 4 4 4  
//   5 5 5 5 5

#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;

    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout << i << " ";
        }
    cout << endl;
    }
    return 0;
}