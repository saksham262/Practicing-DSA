#include<iostream>
using namespace std;
 int main()
{
    int maths,physics,chemistry,hindi,english,marks,percentage;
    cout << "Enter the marks of Maths : ";
    cin >> maths;
    cout << "Enter the marks of Physics : ";
    cin >> physics;
    cout << "Enter the marks of Chemistry : ";
    cin >> chemistry;
    cout << "Enter the marks of Hindi : ";
    cin >> hindi;
    cout << "Enter the marks of English : ";
    cin >> english;
    
    marks = maths + physics + chemistry + hindi + english ;
    percentage = marks/5;

    if (percentage >= 90)
    {
        cout << "Grade : A";
    }
    else if(percentage >=80 && percentage<90)
    {
        cout << "Grade : B";
    }
    else if(percentage >=75 && percentage<80)
    {
        cout << "Grade : C";
    }
    else if(percentage >=50 && percentage<75)
    {
        cout << "Grade : D";
    }
    else if(percentage >= 36 && percentage<50)
    {
        cout << "Grade : E";
    }
    else if(percentage<36)
    {
        cout << "Grade : F(!!...FAIL...!!)";
    }
    
    
    return 0;
}