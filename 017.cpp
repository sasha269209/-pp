//file 017.cpp   (  ...)
//lessons 10 {@pathtocpp cpp}

#include <iostream>
using namespace std;

int main()
{
    double first=0;
    double second=0;
    char answer;
    do
    {

    cout << "imput first value: ";
    cin >> first;

    cout << "imput second value: ";
    cin >> second;

    char oper;
    cout << "imput operation symbol: ";
    cin >> oper;

    cout << "  " << first << "  " << second << "  " << oper << endl;

    switch (oper)
    {
        case '+':
        cout <<first<<" + "<< second << " = " << first+second << endl;
        break;

        case '-':
        cout <<first<<" - "<< second << " = " << first-second << endl;
        break;

        case '*':
        cout <<first<<" * "<< second << " = " << first*second << endl;
        break;

        case '/':
        if (second == 0)
        {
            cout << "Devidev by zero" << endl;
            break;
        }
        else
        {
        cout <<first<<" / "<< second << " = " << first/second << endl;
        break;
        }

        default:
            cout << "Wrong operator" << endl;
            break;
    }
    cout << "Try new operatiom y or n";
    cin >> answer; 
    }
    while (answer != 'n');
       
}