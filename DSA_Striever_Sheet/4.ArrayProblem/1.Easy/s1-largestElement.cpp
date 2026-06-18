// 1st approach : using linear search

// #include<iostream>
// using namespace std;

// int largestElement(int arr[], int n)
// {
//     int largest = arr[0] ;

//     for (int i = 0 ; i <= n-1 ; i++ )
//     {
//         if (arr[i] > largest )
//         {
//             largest = arr[i] ;        
//         }
//     }
//     return largest ;
// }

// int main()
// {
//     int n ;
//     cout << "Enter the number of element in the array : ";
//     cin >> n ;
    
//     int arr[n] ;
//     cout << "Enter the array : " ;
//     for (int i = 0 ; i <= n-1 ; i++)
//     {
//         cin >> arr[i] ;
//     }

//     int ans = largestElement(arr, n);
//     cout << "Largest element is :  " << ans ;

//     return 0;
    
// }

// Time complexity : O(n)
// Space complexity : O(1)



// **********************************************
// Now let's see the 2nd approach : using sorting
// **********************************************


#include<iostream>
#include<algorithm>
using namespace std ;

int largestElement(int n, int arr[])
{
    int answer;
    sort(arr, arr+n);
    answer = arr[n-1];
    return answer;
}

int main()
{
    int n ;
    cout << "Enter the number of an Element in the array : " ;
    cin >> n ;
    int arr[n] ; 
    cout << "Enter an array : " ; 
    for (int i = 0 ; i <= n-1 ; i++)
    {
        cin >> arr[i] ;
    }


    cout << "Largest element is : " << largestElement(n, arr); ;

    return 0 ;
}