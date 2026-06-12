// This pattern draw the character in square like this : (FOR NUMBER = 3)
//   A B C
//   D E F  
//   G H I

#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    char ch='A';
    
    cout << "Enter the n number : " ;
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }

    return 0;
}