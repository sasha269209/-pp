//file 034.cpp   (  Dynamichna pamyat...)
//lessons 24 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

void fill_array(int *array,const int *N);
void show_array (int *array,const int *N);

int main()
{
int *a = new int(10);

*a = 100;
cout << *a << "\n";
cout << a << "\n";

const int *N = new int(5);
int *array = new int[*N];
fill_array(array,N);
show_array(array, N);

a = nullptr;
delete a;
N = nullptr;
delete N;
array = nullptr;
delete array;

}

void fill_array(int *array,const int *N)
{
    for (int i=0;i<*N;++i)
    {
        array[i]= i+1000;
    }
}

void show_array (int *array,const int *N)
{
    for (int i=0;i<*N;++i)
    {
        cout << array[i] << " " ;
    }
    cout << "\n";
}
