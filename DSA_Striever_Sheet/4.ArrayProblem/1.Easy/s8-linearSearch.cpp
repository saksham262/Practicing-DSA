#include<iostream>
#include<algorithm>
using namespace std;

int ls(int n,int arr[],int target)
{
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,target;

    cout << "Enter the size of an array : " ;
    cin >> n;

    int arr[n];
    cout << "Enter the element of an array : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter targeted element to check index of this in array : ";
    cin >> target ;

    int ans = ls(n,arr,target);

    cout << "The index of targeted element in array is : " << ans ;

    return 0;
}