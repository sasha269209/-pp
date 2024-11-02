// file 070.cpp   (  File - open + write..)
// lessons 58 {@pathtocpp cpp}

#include <iostream>
#include <fstream> //Fo work with file
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string FILE_NAME = "070.txt";

    // std::fstream file;    // Make object (for work with file)
    // file.open(FILE_NAME); // Open new file
    // file.open(FILE_NAME, std::ios::out); // Make file + Open new file (for rewrite)
    // file.open(FILE_NAME, std::ios::out | std::ios::app); // Make file + Open new file + Add new text
    std::fstream file(FILE_NAME, std::ios::out | std::ios::app); // Metod open - use automatic
    

    if (file.is_open()) //Check "file.is_open()" == True - if file open (enothe - False)
    {
        std::string str = "Same text \n"; //Make string - text
        file << str; //Write text in file
        file << "Text \n";
    }
    else
    {
        cout << "File " << FILE_NAME <<" not open" << "\n";
    }

    file.close(); // Close file !!!
}
