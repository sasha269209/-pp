// file 093.cpp   (  <memory> - clean memory..)
// lessons 75 {@pathtocpp cpp}

// uto_ptr
// unique_ptr
// shared_ptr
// other .....

#include <iostream>
#include <string>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main() 
{
int* ptr = new int (100);
cout << ptr << endl;
ptr = nullptr;
delete ptr;
cout << ptr << endl;

//   ************** auto_pt ************* OLD ptr - not use
// std::auto_ptr<int> a_ptr = new int (200); // Not good
std::auto_ptr<int> a_ptr(new int (200)); // good
cout <<*a_ptr << endl;  // work OK
std::auto_ptr<int> a_ptr_2 = a_ptr; // Its - OK     BUT !!! (we cansel a_ptr)
// cout <<*a_ptr << endl; // Dond work 


//   ************** unique_ptr *************
std::unique_ptr<int> u_ptr(new int (300)); // good
cout << *u_ptr << endl;  // work OK
// std::unique_ptr<int> u_ptr_2 = u_ptr; // Its -  not OK 


//   ************** shared_ptr *************
std::shared_ptr<int> sh_ptr(new int (400)); // good
cout <<*sh_ptr << endl;  // work OK
std::shared_ptr<int> sh_ptr_2 = sh_ptr; // Its - OK     BUT !!! (we cansel a_ptr)
cout <<*sh_ptr << endl; // work OK 

};