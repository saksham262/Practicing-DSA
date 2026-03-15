//  For searching the element in the array.

#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
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
    int arr[]={7,8,95,63,4,86,25,93,21,10};
    int size=10;
    int target=93;

    cout << linearSearch(arr,size,target) << endl;
    
    return 0;
}