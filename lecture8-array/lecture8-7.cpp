// To reversed the entered array.

#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end) // [while(start<=end)] This is also correct but we normally use this '<' case
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={4,8,9,6,7,3,2};
    int size=7;

    cout << "The entered array is : " << endl;

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl  ;

    reverseArray(arr,size);

    cout << "The reversed array is : " << endl;

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl; 

    return 0;
}