//file ?063cpp   (  ...)
//lessons 39 {@pathtocpp cpp}

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class A
{
double data;
    public:
A():data(0.0){cout<<"Konstryktor bez argymentiw"<<endl;};
//A(){data = 0.0;}
A(double _date){data = _date; cout<<"Konstryktor z argymentom"<<endl;}
A(const A &obj)
{
    cout<<"Konstryktor kopiyuwannya"<<endl;
    data = obj.data;
} 
~A(){cout<<"Destruktor"<<endl;}
};

void foo(A obj)
{

}
int main()
{
A obj(8.8);


foo(obj);
}