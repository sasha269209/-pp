// file 074.cpp   (  Owerload operator << ; >> imtut/output in streeam..)
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
    Point() {}
    Point(int x, int y, int z) : x(x), y(y), z(z) {}
    void show()
    {
        cout << "x= " << x << " y= " << y << " z= " << z << "\n";
    }

    friend std::ostream &operator<<(std::ostream &os, const Point obj);
};

std::ostream &operator<<(std::ostream &os, const Point obj)
{
    os << "x= " << obj.x << " y= " << obj.y << " z= " << obj.z << "\n";
    return os;
}

std::istream &operator>>(std::istream &is, Point &obj)
{
    is >> obj.x >> obj.y >> obj.z;
    return is;
}

int main()
{
    Point pt;
    cin >> pt;
    cout << pt;

    std::ofstream ofile("074.txt");
    ofile << pt;
    ofile.close();
}