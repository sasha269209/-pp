//file 016.cpp   (  ...)
//lessons 10 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
    int x=0;
    cout << "Input value: ";
    cin >> x;

    switch (x)
    {
    case 1 :
        cout << "OK x= 1:" << endl;
        break;

    case 2 :
        cout << "OK x= 2:" << endl;
        break;
    
    default:
        cout << "Default x= :" << x << endl;
        break;
    }
    

}