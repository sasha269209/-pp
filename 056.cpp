// file 056.cpp   ( this        ..)
// lessons 44 {@pathtocpp cpp}

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
    pointers operator+ (pointers other)
    {
        pointers temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
        pointers operator- (pointers other)
    {
        pointers temp;
        temp.x = this->x - other.x;
        temp.y = this->y - other.y;
        return temp;
    }
            pointers operator* (pointers other)
    {
        pointers temp;
        temp.x = this->x + other.x;
        temp.y = this->y * other.y;
        return temp;
    }

            pointers operator/ (const pointers& other)
    {
        pointers temp;
        if (other.x != 0 && other.y != 0 )
        {
        temp.x = this->x / other.x;
        temp.y = this->y / other.y;
        return temp;
        }
        else
        {
            cout << "Devide by zero" << "\n";
            return other;
        }
    }






    //Operatory dlya perewantajennya
    // + - / %
    // ++ --
    // new delete delete[]
    //  < <= == => != !
    // &&  ||
    // =
};

int main()
{
    pointers p_1(8, 5);
    pointers p_2(32,100);
    pointers p_3 = p_1 + p_2;
    p_3.show();
    pointers p_4 = p_2 - p_1;
    p_4.show();
    pointers p_5 = p_2 * p_1;
    p_5.show();
    pointers p_6 = p_2 / p_1;
    p_6.show();
    
}