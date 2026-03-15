// This pattern draw the number in square like this :
//      6 5 4 3 2 1 
//      5 4 3 2 1 
//      4 3 2 1 
//      3 2 1 
//      2 1 
//      1 


#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;

    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=n;i>=0;i--)
    {
        for(j=i+1;j>0;j--)
        {
            cout << j << " ";
    
        }
    cout << endl;
    }
    return 0;
}