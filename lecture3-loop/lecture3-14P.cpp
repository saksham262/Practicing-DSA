// factorial of n number

#include <iostream>
using namespace std;

int main() {
    int i,n;
    long long fact=1;

    cout << "Enter the n number : "; 
    cin >> n;

    if(n<=1)
    {
        return 1;
    }
    else
    { for(i=1;i<=n;i++)
        {
            fact=fact *i;
        }
    }

    cout << "The factorial of n is : " << fact << endl;
    return 0;
}