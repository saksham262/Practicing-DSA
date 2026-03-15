// For transform the binary number into the decimal.

#include<iostream>
using namespace std;

int binTodecimal(int binNum)
{
    int rem,ans=0,pow=1;
    while(binNum>0)
    {
        rem = binNum%10;
        ans = ans+(rem*pow);
        
        binNum = binNum/10;
        pow = pow*2;
    }
    return ans; //In binary form answer
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << binTodecimal(n) << endl;
    
    return 0;
}