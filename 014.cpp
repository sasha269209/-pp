//file 014.cpp   (  ...)
//lessons 09 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{

    int int_1 = 0;
    cout << "Enter number" << endl;
    cin >> int_1;
    cout << "Yor number is:  " << int_1 << endl;

    int int_2 = 0;
    setlocale (LC_ALL, "UA"); //We use for Windows
    cout << "Enter number 2" << endl;
    cin >> int_2;
    cout << "Yor number is:  " << int_2 << endl;
    system ("pause"); //We use for Windows

    float float_1 = 0;
    setlocale (LC_ALL, "UA"); //We use for Windows
    cout << "Enter number - float" << endl;
    cin >> float_1;
    cout << "Yor number is:  " << float_1 << endl;

    string str_1;
    setlocale (LC_ALL, "UA"); //We use for Windows
    cout << "Enter text - hello Sasha" << endl;
    cin >> str_1;
    cout << "Yor text is:  " << str_1 << endl;

    char charttt_1 = 'd';
    setlocale (LC_ALL, "UA"); //We use for Windows
    cout << "Enter char" << endl;
    cin >> charttt_1;
    cout << "Yor char is:  " << charttt_1 << endl;

}