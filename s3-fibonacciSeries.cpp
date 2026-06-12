#include<iostream>
using namespace std;

void fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }

    int last = fibonacci(n-1);
    int secLast = fibonacci(n-2);

    returbn last + secLast;
}

int main()
{
    int n ;
    cout << "Enter the number : " ;
    cin >> n ;
    cout << fibonacci(n) << endl;
    return 0 ;
}