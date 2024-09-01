//file 015.cpp   (  ...)
//lessons 09 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{

    int int_2 = 0;
    cout << "Enter number" << endl;
    cin >> int_2;

    if (int_2 > 0 && int_2 < 50)
    {
    cout << "Yor number is between 0 and 50 " << endl;
    }
    else if (int_2 > 50 && int_2 < 100)
    {
    cout << "Yor number is between 50 and 100 " << endl;
    }

    
    cout << "Enter number 1 or 2 or 3 or 4" << endl;
    cin >> int_2;

    if (int_2 == 1 || int_2 == 2)
    {
    cout << "Yor number is 1 or 2 " << endl;
    }
    else if (int_2 == 3 || int_2 == 4)
    {
    cout << "Yor number is 3 or 4 " << endl;
    }


}