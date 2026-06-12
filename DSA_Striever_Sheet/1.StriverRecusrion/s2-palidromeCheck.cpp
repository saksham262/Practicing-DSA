#include<iostream>
using namespace std;

bool palindrome(int i, string s)
{
    if(i>=s.length()/2)
    {
        return true;
    }
    if(s[i]!=s[s.length()-i-1])
    {
        return false;
    }
    return palindrome (i+1,s);
}

int main()
{
    string s = "namaen";
    cout << palindrome(0,s);
    if(palindrome(0,s)==1)
    {
        cout << "\tNumber is palindrome";
    }
    else
    {
        cout << "\tNUmber is not a palindrome";
    }

    return 0;
}