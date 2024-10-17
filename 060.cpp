// file 060.cpp   ( Friend function       ..)
// lessons 48 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class pointers
{
    friend void data_friend(pointers &obj);

private:
    int x;
    int y;

public:
    pointers(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << "x=" << x << " y=" << y << "\n";
    }
};

void data_friend(pointers &obj)
{
    obj.x = 4;
    obj.y = 6;
};

int main()
{
    pointers aa(33, 44);
    aa.show();

    data_friend(aa);
    aa.show();
}