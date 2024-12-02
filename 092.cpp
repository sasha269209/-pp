// file 092.cpp   ( Ojeck - clean memory..)
// lessons 74 {@pathtocpp cpp}

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T>
class SmartPointer
{
    private:
T* m_ptr;
    public:
SmartPointer(T* ptr): m_ptr(ptr) {}
T& operator*()
{
    return *m_ptr;
}
~SmartPointer()
{
    delete m_ptr;
    cout << "ptrv- del" << endl;
}

};

int main() 
{
int* ptr = new int (100);
cout << ptr << endl;

cout << "main" << endl;

{
SmartPointer<int> ptr_smart = new int (100);
cout << "ptrv- made" << endl;
cout << *ptr_smart << endl;
}


cout << "main - end" << endl;

};