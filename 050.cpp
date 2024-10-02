// file 050.cpp   ( OOP Example..)
// lessons 39 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class car
{
private:
    bool eng_work;

public:
    car() {};
    car(bool _eng_work)
    {
        eng_work = _eng_work;
    }

    void lest_go()
    {
        if (eng_work == 1)
        {
            cout << "OK we go " << "\n";
        }
        else
        {
            cout << "Engin is not work" << "\n";
            cout << "you shout start engine" << "\n";
        }
    }

    void start_eng(bool _eng_work)
    {
        eng_work = _eng_work;
        (eng_work == true) ? cout << "engin start" << "\n" : cout << "engin stop" << "\n";
    }
};

int main()
{
    car bmw; //Use default construktor
    bmw.lest_go();
    bmw.start_eng(true);
    bmw.lest_go();

    cout << "\n";

    car mersedes(true); // Use own construktor
    mersedes.lest_go();
}