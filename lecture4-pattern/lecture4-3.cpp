#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    
    cout << "Enter the n number : " ;
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        char ch='A';
        for(j=1;j<=n;j++)
        {
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }

    return 0;
}