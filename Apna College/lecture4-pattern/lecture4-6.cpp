// This pattern draw the number in square like this :
//   *
//   * * 
//   * * *
//   * * * *
//   * * * * *

#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;

    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << "* ";
        }
    cout << endl;
    }
    return 0;
}