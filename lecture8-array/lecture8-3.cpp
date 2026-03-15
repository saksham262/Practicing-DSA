// Finding the smallest number from the array 

#include<iostream>
using namespace std;

int main()
{
    int num[10];
    int size=10;
    int smallest=INT32_MAX;

    //For input the value of array
    for(int i=0;i<size;i++)
    {
        cout << "Enter the number : " << endl;
        cin >> num[i];
    }

    for(int i=0;i<size;i++)
    {
        if(num[i] < smallest )
        {
            smallest = num[i];
        }
    }
    cout << "The smallest number is : " << smallest;
    return 0;
}