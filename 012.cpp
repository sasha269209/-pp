//file 012.cpp   (cycle do while  ...)
//lessons 07 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    
    do
    {
        cout << "count = " << count << endl;
        count+=1; 
        //count++;
    }
    while (count <= 10);
}