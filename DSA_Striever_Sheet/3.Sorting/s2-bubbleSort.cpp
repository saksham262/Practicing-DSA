#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = n-1 ; i >= 0  ; i-- )
    {
        int didSwap = 0 ;
        for (int j = 0 ; j <= i-1 ; j++ )
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]) ; 
                didSwap = 1 ;
            }

            if (didSwap==0 ) break ;
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

    bubbleSort(arr,n) ;
    cout << "Sorted array is : " ;
    for(int i = 0 ; i <= n-1 ; i++ )
    {
        cout << arr[i] << "  " ;
    }

    return 0 ;
}