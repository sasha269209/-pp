//file 008.cpp   (if  else if else   ...)
//lessons 05 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20;
    bool c;

    if (a < b)
    {
        cout << "a<b" << endl;
    }

    if (a == b)
    {
        cout << "a = b" << endl;
    }

    if (a == b)
    {
        cout << "a = b" << endl;
    }
    else
    {
        cout << "a not equal b" << endl;

    }
    cout << endl;

    cout << "Lets play" << endl;
    cout << "Enter your a" << endl;
    cin >> a;
    cout << "Enter your b" << endl;
    cin >> b;
    if (a<b)
    {
        cout << "a<b" << endl;
    }
    else if (a>b)
    {
        cout << "a>b" << endl;
    }
    else
    {
        cout << "a=b" << endl;
    }
    



/*

    c = a <  b;
    cout << "c= " << c << endl;
    c = a >  b;
    cout << "c= " << c << endl;
    c = a <=  b;
    cout << "c= " << c << endl;
    c = a >=  b;
    cout << "c= " << c << endl;
    c = a == b;
    cout << "c= " << c << endl;
    c = a !=  b;
    cout << "c= " << c << endl;
    cout << endl;

    a = 10;
    c = (a);
    cout << "c= " << c << endl;
    c = (!a);
    cout << "c= " << c << endl;
    cout << endl;

    a = 0;
    c = (a);
    cout << "c= " << c << endl;
    c = (!a);
    cout << "c= " << c << endl;
    cout << endl;

    */   
}