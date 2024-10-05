// file 055.cpp   ( this        ..)
// lessons 43 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class pointers
{
private:
    int x;
    int y;

public:
    pointers()
    {
        x = 0;
        y = 0;
    }
    pointers(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void show()
    {
        cout << "x=" << x << " y=" << y << "\n";
    }
    pointers plus(pointers other)
    {
        pointers temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
};

int main()
{
    pointers p_1(55, 77);
    pointers p_2(100,100);
    pointers p_3 = p_1.plus(p_2);
    p_3.show();

    
}