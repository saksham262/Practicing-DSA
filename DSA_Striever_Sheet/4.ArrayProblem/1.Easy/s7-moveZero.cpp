#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(int arr[], int n)
{
    vector<int> temp(n, 0);

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveZeroes(arr, n);

    cout << "After moving zeroes: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}