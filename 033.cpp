//file 033.cpp   ( Wkaziwnuky ...)
//lessons 23 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

int foo (int *a);
int change_value(int *a, int index);
int show_array(int *a,int n);

int main()
{
int a =10;
int b = 55;
int *ptr_a = &a;
cout << "adresa: ptr_a  " << ptr_a << "\n";
cout << "adresa: &a     " << &a << "\n";
cout << "adresa: &b     " << &b << "\n";
cout << "zminna: *ptr_a " << *ptr_a << "\n";

*ptr_a = 22;
cout << "*ptr_a = 22 = " << a << "\n";

a = 22;

cout << "Pozmir ptr_a - " << sizeof(ptr_a) << " bayt" << "\n";

cout << "foo (&a)   " << foo (&a)<< "  A=:  " << a << endl;
cout <<"(prt_a)    " << foo (ptr_a) << "  A=:  " << a << endl;

foo(ptr_a);
cout << a <<endl;

// masyv

int array [5]={1,2,3,4,5};
int *ptr_array=array;
change_value(ptr_array,3);
show_array(ptr_array, 5);

}


int foo (int *a)
{
    return ++*a;
    //return *a = 1000;
    //return *a= *a+10;
    //return *a+10; // Zbilshue rezultat (znachennya a ne zminue)
}

int change_value(int *a, int index)
{
    a[index] = 100;
}

int show_array(int *a,int n)
{
    for(int i=0;i<n;++i)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}
