#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> vec = {'a','b','c','d','e'};

    cout << "Vector size = " << vec.size() << endl;
    vec.push_back('f');     // This for the push or add the value in the vector
    vec.push_back('g');     
    vec.push_back('h');
    cout << "Vector size after push = " << vec.size() << endl;      //size of vector
    vec.pop_back(); //delete last value
    cout << "Vector size after push and pop = " << vec.size() << endl;
     
    cout << "The first value of vector = " << vec.front() << endl;      //Show front value of the vector
    cout << "The last value of vector = "<<vec.back() << endl;          //Show last value of the vector
    cout << "The value at 2nd index = " << vec.at(2) << endl;           //show the value of 2nd index

    for(char val : vec)
    {
        cout << val << endl;
    } //this for loop name is "for each loop"
    
    return 0;
}