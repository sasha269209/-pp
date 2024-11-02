// file 071.cpp   (  File - open + read..)
// lessons 59 {@pathtocpp cpp}

#include <iostream>
#include <fstream> //Fo work with file
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string FILE_NAME = "071.txt";
    std::string str = "Same text \n"; //Make string - text
    std::string in_str; //Make string - text (fo reading from file)
    char c; //Char - for read symbols from file

// Write file - Start

    std::fstream file(FILE_NAME, std::ios::out | std::ios::app); // Metod open - use automatic

    if (file.is_open()) //Check "file.is_open()" == True - if file open (enothe - False)
    {
        file << str; //Write text in file
        file << "Text \n";
        cout << "File " << FILE_NAME << " opened and write" << "\n";
    }
    else
    {
        std::cerr << "File " << FILE_NAME <<" not open for write" << "\n"; //???
    }

    file.close(); // Close file !!!

// Write file finish

// read file - Start
    std::ifstream in_file(FILE_NAME); // Metod open - use automatic

    if (in_file.is_open()) //Check "file.is_open()" == True - if file open (enothe - False)
    {
        cout << "File " << FILE_NAME << " opened and read" << "\n";

        std::getline(in_file, in_str); // Read line from file
        cout << in_str << "\n";

        std::getline(in_file, in_str); // Read line from file
        cout << in_str << "\n";
    }
    else
    {
        std::cerr << "File " << FILE_NAME <<" not open for read" << "\n"; //???
    }
    in_file.close(); // Close file !!!
// read file - line - Stop

// read file - by char - Start
    char str_ar [500];
    int count = 0;
    std::ifstream in_file_ch(FILE_NAME); // Metod open - use automatic

    if (in_file_ch.is_open()) //Check "file.is_open()" == True - if file open (enothe - False)
    {
        cout << "File " << FILE_NAME << " opened and read - char" << "\n";
    
        while (in_file_ch.get(c)) // get method - to read symbols and write in c
        {
            cout << c;
            str_ar[count] = c;
            count++;
        };
        str_ar[count] = '\0';
        cout << "ENG" << "\n";
        cout << str_ar ;
    }
    else
    {
        std::cerr << "File " << FILE_NAME <<" not open for read" << "\n"; //???
    }
    in_file_ch.close(); // Close file !!!

// read file - by char - Stop
}
