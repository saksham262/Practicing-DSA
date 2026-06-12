#include <iostream>
using namespace std;

int main() {
    int i,j,n,m;

    cout << "Enter the n number for the column : ";
    cin >> n;

    cout << "Enter the m number for the row : ";
    cin >> m;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout << "*";
        }
    cout << endl;
    }
    return 0;
}