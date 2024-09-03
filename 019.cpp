//file 019.cpp   ( array + const ...)
//lessons 10 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
const int SIZE = 5;
int arr[SIZE];
for(int i=0;i<SIZE;i++)
{
    arr[i]=i+20;
    cout << "Element " << i << " = " << arr[i] << endl;
}

}