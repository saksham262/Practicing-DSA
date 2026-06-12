// For loop 
// for printing the range from 1 to n number(The n is given by the user)

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter the number : ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        cout << i << endl;
    }
    return 0;
}