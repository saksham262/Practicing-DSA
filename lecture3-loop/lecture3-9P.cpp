// For loop 
// for printing the range from 1 to n number sum (The n is given by the user)

#include<iostream>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout << "Enter the number : ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    cout << "The Sum of n number is : " << sum << endl;
    return 0;
}