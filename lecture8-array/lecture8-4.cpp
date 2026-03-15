// Finding the maximum number from the array 

#include<iostream>
using namespace std;

int main()
{
    int num[10];
    int size=10;
    int maximum=INT32_MIN;

    //For input the value of array
    for(int i=0;i<size;i++)
    {
        cout << "Enter the number : " << endl;
        cin >> num[i];
    }

    for(int i=0;i<size;i++)
    {
        if(num[i] > maximum )
        {
            maximum = num[i];
        }
    }
    cout << endl;
    cout << "The maximum number is : " << maximum;

    return 0;
}