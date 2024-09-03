//file 018.cpp   ( array ...)
//lessons 10 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "First ellement = " << arr[0] << endl;
    cout << "Fifth ellement = " << arr[4] << endl;
    cout << "rubbish ellement = " << arr[46] << endl;
    cout << endl;

    for(int i=0;i<5;i++)
        cout << "Element " << i << " = " << arr[i] << endl;
    cout << endl;

    for(int i=0;i<5;i++)
    {        arr[i] = i+57;
        cout << "Element " << i << " = " << arr[i] << endl;

    }
    cout << endl;

    cout << "Plese write a dimention of array :";
    int size = 0;
    cin >> size;

    int arr_2[size];
    for(int i=0;i<size;i++)
    {        arr_2[i] = i+10;
        cout << "Element " << i << " = " << arr_2[i] << endl;

    }
    cout << endl;


}