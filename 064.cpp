// file 064.cpp   (  Vkazivnyk na function..)
// lessons 54 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;


void foo()
{
    cout << __PRETTY_FUNCTION__ << endl;
}

void fill_array (int* arr, const int N)
{
    for(int i=0; i<N; ++i)
    {
        arr[i] = rand()%99;
    }
}

void show_array (int* arr, const int N)
{
    for(int i=0; i<N; ++i)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

bool cmp(int &a, int &b)
{
    return a<b;
}

int main()
{
    foo();
    void (*ptr_foo)() = foo; // Vkazivnyk (pointers) na function
    ptr_foo();
    cout << ptr_foo << "\n"; // Ne adresa - some bool indikator
    cout << (void*)ptr_foo << "\n"; // Tce adresa - in memory data
    //Next example with array
    const int SIZE = 10;
    int *arr = new int [SIZE];  //Array in dinamic memory
    // int arr[SIZE]; // Array in stec memory
    fill_array (arr, SIZE);
    show_array (arr, SIZE);
    // std::sort(arr, arr+SIZE);
    bool (*ptr_cmp)(int &a, int &b) = cmp;
    std::sort(arr, arr+SIZE, ptr_cmp);
    show_array (arr, SIZE);

}
