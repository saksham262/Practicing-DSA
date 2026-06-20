#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int duplicateArray(int n, int arr[])
{
    int i = 0 ;
    for(int j = 1 ; j < n ; j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    int n ;
    cout << "Enter the size of an array : ";
    cin >> n ;
    int arr[n];
    cout << "Enter the element of array : ";
    for (int i = 0 ; i <= n-1 ; i++)
    {
        cin >> arr[i];
    }

    int answer =  duplicateArray(n , arr);

    cout << "The array is : " << answer;

    return 0 ;
}