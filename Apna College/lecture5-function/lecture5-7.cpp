#include<iostream>
using namespace std;

long long fact(int n)
{
    long long result = 1;
    if(n == 0 || n == 1)
        return 1;

    for(int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

long long nCr(int n, int r)
{
    if(r > n) return 0; // ✅ Handle invalid cases

    long long fact_n = fact(n);
    long long fact_r = fact(r);
    long long fact_nmr = fact(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r; 
    
    cout << "nCr = " << nCr(n, r) << endl;
    return 0;
}
