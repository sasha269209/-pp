// file 089.cpp   ( Algorytny + count elem + sum + min ..)
// lessons 71 {@pathtocpp cpp}

#include <iostream>
#include <string>
#include <random>
typedef unsigned long long ull;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void fillarray(int* ptr, const size_t N)
{
    for(size_t i = 0; i<N; ++i)
    {
        ptr[i] = rand()%100;
    }

}

void showarray(int* ptr, const size_t N)
{
    for(size_t i = 0; i<N; ++i)
    {
        cout << ptr[i] << "  ";
    }
    cout << endl;

}

int rozmir(int* prt, const size_t N)
{
    int rozmir = 0;
    for(size_t i = 0;  i < N; ++i)
    {
        rozmir++;
    }
    return rozmir;
}

unsigned int sum_arr (int* ptr, const size_t N)
{
    unsigned int sum_arr  = 0;
    for(size_t i = 0;  i < N; ++i)
    {
        sum_arr += ptr[i];
    }
    return sum_arr;
}

int min_arr (int* ptr, const size_t N)
{
    int min_arr  = ptr[0];
    for(size_t i = 0;  i < N; ++i)
    {
        if (min_arr > ptr[i])
        min_arr = ptr[i];
    }
    return min_arr;
}


int main()
{
const size_t SIZE = 10;
srand(time(NULL));

int* arr = new int[SIZE];

fillarray(arr, SIZE);
showarray(arr, SIZE);
cout << rozmir(arr,SIZE) << endl;
cout << sum_arr(arr,SIZE) << endl;
cout << min_arr(arr,SIZE) << endl;

};