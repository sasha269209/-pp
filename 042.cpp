//file 042.cpp   ( union...)
//lessons 32 {@pathtocpp cpp}

#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

union un
{
    short sh;
    int it;
    double db;
};

int main()
{

un MyUn;

MyUn.db = 1000.99;
cout << "MyUn.db = 1000.99;  " << MyUn.db << "\n"; 
MyUn.it = 15;
cout << "MyUn.it = 15;  " << MyUn.it << "\n";
MyUn.sh = 200;
cout << "MyUn.sh = 200;  " << MyUn.sh << "\n";
cout << "\n";
cout << "MyUn.db = 1000.99;  " << MyUn.db << "\n"; 
cout << "MyUn.it = 15;  " << MyUn.it << "\n";

return 0;
}