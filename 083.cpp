// file 083.cpp   (  Shablony + Konteyner..)
// lessons 67 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template <class T>
class Array
{
    int m_length;
    T *arr;

public:
    Array()
    {
        m_length = 0;
        arr = nullptr;
    }
    Array(int length)
    {
        m_length = length;
        arr = new T[m_length];
    }
    ~Array()
    {
        delete[] arr;
        arr = nullptr;
    }
    T &operator[](int index)
    {
        return arr[index];
    }
};

int main()
{
    const int SIZE = 10;
    Array <int> arr(SIZE);
    arr[5] = 34;
    cout << arr[5] << "\n";
  
    Array <double> arr_d(SIZE);
    arr_d[5] = 34.5;
    cout << arr_d[5] << "\n";
}