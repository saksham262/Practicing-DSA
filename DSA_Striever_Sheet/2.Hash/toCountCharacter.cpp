#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : " ;
    cin >> s;
    int hash[26] = {0} ;
    for (int i = 0 ; i < s.size() ; i++ )
    {
        hash [s[i] - 'a' ] ++ ;
    }
    int query ;
    cout << "Enter the queries : " ;
    cin >> query ;

    while (query--)
    {
        cout << "Enter the character for check frequency of that character : " ;
        char c;
        cin >> c ;
        cout << "The frequency is : " << hash [c - 'a' ] << endl ; 
    }

    return 0 ;
}