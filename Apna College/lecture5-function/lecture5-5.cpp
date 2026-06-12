// Pass by value.
// isme hota kuch uh h ki main ke liye memory or changes ke liye memory dono alag alag allocate hoti h stack ke under.
// Or main ka X, changes ke X ko nahi janta just because ye dono x alag h isliye 

#include<iostream>
using namespace std;

void changes(int x)
{
    x=x*2;
    cout << "X= " << x << endl;
}
int main()
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    changes(x);
    cout << "X= " << x << endl;
    return 0;
}
