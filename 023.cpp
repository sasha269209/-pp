//file 023.cpp   ( type char  ...)
//lessons 16 {@pathtocpp cpp}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[80];
    char str_1[] = "some text";
    cout << str_1 << "\n";

    char str_2 [80];
    cout << "Plese enter some text: ";
    cin.getline(str_2,80);
    cout << "Your text: " << str_2 << endl;
    
    char str_3 [] = "SOME text";
    for(int i=0;i<strlen(str_3);i++)
        cout << str_3[i];
    cout << endl;

    //Function to work with rows
    //
    // strlen
    char str_5[]="Hello world";
    cout << "len of " << str_5 << " is equal " << strlen(str_5) << endl;

    //Function to work with rows
    //
    // strlen + '\0'
    char str_6[]="Hello world";
    str_6[8]='\0';
    cout << "len of " << str_6 << " is equal " << strlen(str_6) << endl;

    //Function to work with rows
    //
    // strcpy
    char str_7[]="Hello Sasha";
    char str_8[15];
    cout << "str_7 = " << str_7 << endl;
    strcpy(str_8, str_7);
    cout << "str_8 = " << str_8 << endl;

    //Function to work with rows
    //
    // strcat
    char str_9[20] = "Some ";
    char str_10[] = "text";
    strcat(str_9, str_10);
    cout << "str_9 = " << str_9 << endl;

    //Function to work with rows
    //
    // strcmp
    char str_11[] = "Some ";
    char str_12[] = "text";
    char str_13[] = "text";
    cout << "compare str_11 and str_12 ; " << strcmp(str_11,str_12 ) << endl;
    cout << "compare str_12 and str_13 ; " << strcmp(str_12,str_13 ) << endl;
}