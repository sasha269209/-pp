// file 081.cpp   (  Shablony + Konteyner..)
// lessons 67 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Array
{
    int m_length;
    int *arr;

public:
    Array()
    {
        m_length = 0;
        arr = nullptr;
    }
    Array(int length)
    {
        m_length = length;
        arr = new int[m_length];
    }
    ~Array()
    {
        delete[] arr;
        arr = nullptr;
    }
    int &operator[](int index)
    {
        return arr[index];
    }
};

int main()
{
    const int SIZE = 10;
    Array arr(SIZE);
    for(int i = 0; i<SIZE; ++i)
    {
        arr[i] = i+1;
    }
      for(int i = 0; i<SIZE; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

}