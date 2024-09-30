// file 080cpp   (  Naslidyvannya...)
// lessons 50 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Parent
{
    int m_data;

public:
    Parent() : m_data(0) {}

    Parent(int data) : m_data(data) {}

    void set_data(int data)
    {
        m_data = data;
    }

    int get_date()
    {
        return m_data;
    }
};

// class Child : private Parent
class Child : public Parent
{
    int c_data;

public:
    Child() : c_data(0), Parent() {}
    Child(int ch_date, int p_date) : c_data(ch_date), Parent(p_date) {}

    void show_data()
    {
        cout << "c_data  " << c_data << "\n";
        cout << "p_data  " << get_date() << "\n";
    }
};

int main()
{
    Child C(14, 25);
    C.show_data();
    C.set_data(500);
    C.show_data();
}
