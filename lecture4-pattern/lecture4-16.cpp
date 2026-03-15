// This pattern draw the number in square like this :

//      *
//     * *
//    *   *
//   *     *
//    *   *
//     * *
//      *

#include <iostream>
using namespace std;

int main() 
{
    int i,j,n;
    cout << "Enter the n number for the column : ";
    cin >> n;

    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)     //This loop is for the spaces
       {
        cout << " ";
       }
       cout << "*";
       if(i!=0)
       {
            for(j=0;j<2*i-1;j++)      //This loop is for the print the number 1
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<i+1;j++)     //This loop is for the spaces
       {
        cout << " ";
       }
       cout << "*";
       if(i!=n-2)
       {
            for(j=0;j<2*(n-i)-5;j++)      //This loop is for the print the number 1
            {
                cout << " ";
            }
            cout << "*";
       }
       cout << endl;
    }
    return 0;
}
