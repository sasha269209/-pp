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
    const string FILE_NAME = "072.txt";

    std::ifstream in_file(FILE_NAME); // Metod open - use automatic

    if (in_file.is_open()) // Check "file.is_open()" == True - if file open (enothe - False)
    {
        cout << "File " << FILE_NAME << " opened and read" << "\n";

        // std::getline(in_file, in_str); // Read line from file
        // cout << in_str << "\n";

        // ???
        char ch_arr[100];
        char *ptr_ch_arr = ch_arr;
        int size = 10;
        string str;

        while (in_file.getline(ch_arr, 11))
        {
            cout << "ch_arr = " << ch_arr << " size = " << size << "\n";
        };
    }
    else
    {
        std::cerr << "File " << FILE_NAME << " not open for read" << "\n"; //???
    }
    in_file.close(); // Close file !!!
}
