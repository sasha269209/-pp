//file ?063cpp   (  ...)
//lessons 39 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Car
{
    private:
bool work_eng;
    public:
Car (){} // Konstrykror za zamowchuwannyam
Car ( bool _work_eng) // Konstryktor z argumentom
{
    work_eng = _work_eng;
}
void start_engine (bool start_stop)
{
    work_eng = start_stop;
    if (start_stop)
    cout << "Motor zavelu" << endl;
    else
    cout << "Motor zaglushuly" << endl;
}
void run()
{
    if (work_eng == true)
        {
            cout << "My poihaly" << endl;
        }
    else
        {
            cout << "My ne poihaly" << endl;
            cout << "Spochatky treba zawesty motor" << endl;
        }
};
void end_line ()
{
    cout << endl;
}
};

int main()
{
cout << "bmb" << endl;
Car bmw;
bmw.run();
bmw.start_engine (1);
bmw.run();
bmw.end_line();

cout << "Mersedes" << endl;
Car Mersedes(0);
Mersedes.run();
Mersedes.start_engine(1);
Mersedes.run();
Mersedes.end_line();



}