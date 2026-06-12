#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0 ; i <= n-2 ; i++ )
    {
        int min = i ;
        for (int j = i ; j <= n-1 ; j++ )
        {
            if(arr[j] < arr[min])
            {
                min = j ;
            }
        }
        swap(arr[i],arr[min]) ;
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