#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array : " ;
    for (int i=0;i<=n-1;i++)
    {
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0 ; i < n ; i++)
    {
        hash [arr[i]] = hash[arr[i]] + 1 ;
    }

    int query ;
    cout << "Enter the number of queries : " ;
    cin >> query ;
    while (query--)
    {
        int x ;
        cout << "Enter the number of which you want to search the frequescy : " ;
        cin >> x;
        cout << "The frequency is : " << hash[x] << endl ;
    }

    return 0 ;
}