// For sum of the individual number.

#include<iostream>
using namespace std;

int sumOfDigit(int x)
{
    long long int n=x,lastdigit;
    int digitSum=0;
    while(n>0)
    {
        lastdigit=n%10;
        n=n/10;
        digitSum+=lastdigit;
    }
    cout << "The sum of individuals number is : " << digitSum << endl;
    return digitSum;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    sumOfDigit(n);
    return 0;
}