// This pattern draw the number in square like this :
//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1


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
       for(j=0;j<n-i-1;j++)     //This loop is for the spaces
       {
        cout << " ";
       }
       for(j=1;j<=i+1;j++)      //This loop is for the print the number 1
       {
        cout << j;
       }
       for(j=i;j>0;j--)         //This loop is for the print the number 1
       {
        cout << j;
       }
       cout << endl;
    }
    return 0;
}
