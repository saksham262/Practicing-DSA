#include<iostream> 
#include<algorithm>
using namespace std;

bool isSorted(int n , int arr[])
{
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true ;
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

    bool answer =  isSorted(n , arr);

    cout << "The array is sort (1=True && 0=false) : " << answer;

    return 0 ;
}