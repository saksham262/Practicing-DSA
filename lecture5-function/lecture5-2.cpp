// To find the minimum number

#include<iostream>
using namespace std;

int min_of_two(int a,int b) //parameter
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a,b;
    cout << "Enter the a :";
    cin >> a;
    cout << "Enter the b :";
    cin >> b;

    cout << "Minimum = " << min_of_two(a,b); //argument
    return 0;
}