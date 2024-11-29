// file 090.cpp   ( Algorytny + my sort..)
// lessons 72 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include <random>
typedef unsigned long long ull;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fillarray(int *ptr, const size_t N)
{
    for (size_t i = 0; i < N; ++i)
    {
        ptr[i] = rand() % 100;
    }
}

void showarray(int *ptr, const size_t N)
{
    for (size_t i = 0; i < N; ++i)
    {
        cout << ptr[i] << "  ";
    }
    cout << endl;
}

void sortarray (int *ptr, const size_t N)
{
        for (int i = 0; i < N-1; ++i) // Zownishniy cykle
    {
        int min_index = N - 1; // Pryznach ind poch min znach
        int indez_ins = i;    // Pryzn poch znach wnytrish cykly
        for (indez_ins; indez_ins < N; ++indez_ins)
        {
            if( ptr[indez_ins] < ptr[min_index] )
            { 
                min_index = indez_ins; // Shukk min znach     
            }
        }
        //Zapc v pershuy el min znach
        int temp = ptr[i];
        ptr[i] = ptr[min_index];
        ptr[min_index] = temp;

    }
}

int main()
{
    const size_t SIZE = 7;
    srand(time(NULL));

    int *arr = new int[SIZE];

    fillarray(arr, SIZE);

    showarray(arr, SIZE);

    sortarray(arr, SIZE);

    showarray(arr, SIZE);

};