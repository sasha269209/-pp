// file 059_pionters.cpp   (         ..)
// lessons 47 {@pathtocpp cpp}

#include "059_pointers.h"

pointers::pointers()
{
    x = 0;
    y = 0;
}
pointers::pointers(int x, int y)
{
    this->x = x;
    this->y = y;
}

 void pointers::show()
    {
        cout << "x=" << x << " y=" << y << "\n";
    }

pointers pointers::operator+(pointers other)
{
    return pointers(this->x + other.x,this->y + other.y);
}
pointers pointers::operator-(pointers other)
{
    pointers temp;
    temp.x = this->x - other.x;
    temp.y = this->y - other.y;
    return temp;
}

pointers pointers::operator*(pointers other)
{
    pointers temp;
    temp.x = this->x + other.x;
    temp.y = this->y * other.y;
    return temp;
}

pointers pointers::operator/(const pointers &other)
{
    pointers temp;
    if (other.x != 0 && other.y != 0)
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
 pointers pointers::operator% (const pointers& other)
    {
        return pointers(this->x % other.x , this->y % other.y);  
    }

bool pointers::operator== (const pointers& other)const
{
    return(this->x == other.x && this->y == other.y);
}

bool pointers::operator< (const pointers& other)const
{
    return(this->x < other.x && this->y < other.y);
}

bool pointers::operator> (const pointers& other)const  //another princip
{
    return(this->x +  this->y > other.x + other.y);
}

std::ostream &operator<<(std::ostream &os,const pointers &obj)
{
    os << "x= " << obj.x << "\n" << "y= " << obj.y << "\n";
    return os;
}