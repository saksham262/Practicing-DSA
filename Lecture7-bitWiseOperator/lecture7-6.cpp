// For reverse the existing number.

#include<iostream>
using namespace std;

int reverseTheNumber(int x)
{
    int n=x,lastdigit;
    int reverseNum=0;
    while(n>0)
    {
        lastdigit=n%10;
        n=n/10;
        reverseNum=reverseNum*10+lastdigit;
    }
    cout << "The rweversed number is : " << reverseNum << endl;
    return reverseNum;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    reverseTheNumber(n);
    return 0;
}