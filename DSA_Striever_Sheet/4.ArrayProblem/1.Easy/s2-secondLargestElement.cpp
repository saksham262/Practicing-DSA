#include<iostream>
#include<algorithm>
using namespace std;

int secLargestElement(int n, int arr[])
{
    sort(arr,arr+n);
    return arr[n-2];
}

int main()
{
    int n ;
    cout << "Enter ther number of size of an array : " ;
    cin >> n ;
    int arr[n];
    cout << "Enter the element : " ;
    for (int i=0 ; i<=n-1 ; i++)
    {
        cin >> arr[i] ;
    }
    
    cout << "2nd largest element is : " << secLargestElement(n, arr);

    return 0 ;
}