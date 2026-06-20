#include<iostream>
#include<algorithm>
using namespace std;

int leftRotate(int arr[],int n)
{   
    int temp = arr[0];
    for(int i = 1 ; i <= n-1 ; i++)
    {
        arr[i-1]=arr[i];
    }
    
    arr[n - 1] = temp;

}

int main()
{
    int n ;
    cout << "Enter the number of size of an array : ";
    cin >> n ;
    int arr[n];
    cout << "Enter the element of the array : ";
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr,n) ;

    for(int num : arr)
    {
        cout << num << " " ;
    }

    return 0 ;
}