#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0 ; i <= n-1  ; i++ )
    {
        int j = i ;
        while ( j > 0 && arr[j] < arr[j-1] )
        {
            swap(arr[j],arr[j-1]) ;
            j--;
        }
    }
}

int main()
{
    int n ;
    cout << "Enter the size of an array : " ;
    cin >> n ;
    int arr[n] ;
    cout <<"Enter the array : " ;
    for (int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }

    selectionSort(arr,n) ;
    cout << "Sorted array is : " ;
    for(int i = 0 ; i <= n-1 ; i++ )
    {
        cout << arr[i] << "  " ;
    }

    return 0 ;
}