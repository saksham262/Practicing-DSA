#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array : ";
    map<int, int> mpp;
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
        mpp[arr[i]]++ ;
    }

    int query ;
    cout << "Enter the query : " ;
    cin >> query ;
    while (query--) 
    {
        int x ;
        cout << "Enter the number for check frequency of that number : " ;
        cin >> x ;
        cout << mpp[x] << endl ;
    }


    return 0 ;
}