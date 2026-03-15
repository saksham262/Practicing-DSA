// For loop 
// for printing the sum of the range from 1 to n number (But sum the multiple of 3 in the n range)

#include<iostream>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cout << "Enter the number : ";
    cin >> n;

    for(i=1;i<=n;i+=3)
    {
        sum = sum+i;
    }
    cout << "The Sum of n number is : " << sum << endl;
    return 0;
}