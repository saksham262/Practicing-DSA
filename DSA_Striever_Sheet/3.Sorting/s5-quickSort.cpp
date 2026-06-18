#include<iostream>
using namespace std;

int f(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while(arr[j] >= pivot && j >= low)
        {
            j--;
        }
        if(i < j)
        {
            swap (arr[i], arr[j]) ;
        }
    }
    swap (arr[low], arr[j]) ;
    return j;
}

quickSort(int arr[], int low, int high)
{
    if(low <= high)
    {
        int partitionIndex = f(arr,low,high);
        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }

}

int main()
{
    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n-1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}