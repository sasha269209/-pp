//file 010.cpp   (function  ...)
//lessons 06 {@pathtocpp cpp}

#include <iostream>
using namespace std;

void show_data (int a);
void show_data_2 (int a, float c);
int add_num (int a, int b);
int add_num_2 (int a, int b);

int main()
{
    show_data (777);

    show_data_2 (22, 3.14);

    cout << "Reult of add_num function is  " << add_num (15, 44) << endl;

    cout << "Reult of add_num_2 function is  " << add_num_2 (150, 444) << endl;
}

void show_data (int a)
{
    std::cout << "a= " << a << std::endl;
}

void show_data_2 (int a, float c)
{
    std::cout << "a= " << a ;
    std::cout << "    c= " << c << std::endl;
}

int add_num (int a, int b)
{
    int c = a + b;
    return c;
}

int add_num_2 (int a, int b)
{
    return a+b;
}