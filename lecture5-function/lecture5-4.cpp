// For factorial of n number.

#include<iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    if(n==1 || n==0)
        return 1;

    for (int i=1 ;i<=n;i++)
    {
       fact = fact *i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}