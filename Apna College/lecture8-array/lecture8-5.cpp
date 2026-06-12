// PASS BY REFERENCES

#include<iostream>
using namespace std;

void changeArr(int n[],int size)
{
    cout << "For function : \n";
    for(int i=0;i<size;i++)
    {
        n[i]=2*n[i];
    }
}
int main()
{
    int n[5] = {7,8,5,3,4};

    changeArr(n,5);
    
    cout << "In main :\n";

    for(int i=0;i<5;i++)
    {
        cout << n[i] << endl;
    }
    
    cout << endl;
    return 0;
}