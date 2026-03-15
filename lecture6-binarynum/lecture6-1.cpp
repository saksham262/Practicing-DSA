// For transform the decimal number into the binary.

#include<iostream>
using namespace std;

int decToBinary(int decNum)
{
    int rem,ans=0,pow=1;
    while(decNum>0)
    {
        rem = decNum%2;
        decNum = decNum/2;

        ans = ans+(rem*pow);
        pow = pow*10;
    }
    return ans; //In binary form answer
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << decToBinary(n) << endl;
    
    return 0;
}