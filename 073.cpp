// file 073.cpp   (  Write in file classes - binary..)
// lessons 60 {@pathtocpp cpp}

#include <iostream>
#include <fstream> //Fo work with file
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Point
{
public:
    int x;
    int y;
    int z;
    Point () {}
    Point(int x, int y, int z) : x(x), y(y), z(z) {}
    void show()
    {
        cout << "x= " << x << " y= " << y << " z= " << z << "\n";
    }
};

string pach = "/home/lessons/cpp/073.bin";

int main()
{
    Point pt(10, 20, 30);

    std::ofstream w_file(pach, std::ios_base::binary);
    if (w_file.is_open())
    {
        cout << "File open" << "\n";
        w_file.write((char *)&pt, sizeof(Point)); // https://en.cppreference.com/w/cpp/io/basic_ostream/write
    }
    else
    {
        std::cerr << "Errot - file not oipen" << "\n";
    }

    w_file.close();

    // UP - Write DOUN - read

    Point o_read;
    std::ifstream r_file(pach, std::ios_base::binary);
    
    
    if (r_file.is_open())
    {
        cout << "File open" << "\n";
        r_file.read((char *)&o_read, sizeof(Point));

        // r_file.read((char *)&read, sizeof(Point));
    }
    else
    {
        std::cerr << "Errot - file not oipen" << "\n";
    }

    r_file.close();

    o_read.show();


}
