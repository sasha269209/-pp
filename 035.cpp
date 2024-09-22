//file 035.cpp   (  Aryfmetyka wkaziwnukiw...)
//lessons 25 {@pathtocpp cpp}

#include <iostream>
using std::cout;
using std::endl;

int main()
{
const int SIZE = 5;
int array[SIZE] = {4,55,66,77,88};
cout << "array - addres = " << array << "\n";
cout << "elemnt 0 = " << *array << "\n";

int *ptr_array = array;
cout << "ptr_array - addres = " << ptr_array << "\n";
cout << "\n";

cout << "elemnt 0 = \t" << *ptr_array << "\n";
cout << "addres elemnt 0 = \t" << ptr_array << "\n";

ptr_array = ptr_array + 1;
cout << "elemnt +1 = " << *ptr_array << "\n";
cout << "addres elemnt +1 = " << ptr_array << "\n";

ptr_array = ptr_array + 2;
cout << "elemnt +2 = " << *ptr_array << "\n";
cout << "addres elemnt +2 = " << ptr_array << "\n";

ptr_array = ptr_array - 3;
cout << "elemnt -3 = " << *ptr_array << "\n";
cout << "addres elemnt -3 = " << ptr_array << "\n";

ptr_array = ptr_array + 14; // !!! Slidkuy za rozmirom masuwy !!!
cout << "elemnt +14 = " << *ptr_array << "\n";
cout << "addres elemnt +14 = " << ptr_array << "\n";


}
