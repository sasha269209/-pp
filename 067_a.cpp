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
double *data = new double;
    public:
A()
{
    cout<<"Konstryktor bez argymentiw"<<endl;
    data = new double(0.0);
};
A(double _date)
{
    data = new double (_date);
    cout<<"Konstryktor z argymentom"<< this << endl;
}
A(const A &obj)
{
    cout<<"Konstryktor kopiyuwannya"<< this << endl;
    data = new double(*obj.data);
    //data = obj.data;
} 
~A()
{
    cout<<"Destruktor"<< this << endl;
    delete data;
}
};

void foo(A obj)
{

}
int main()
{
A obj(8.8);


foo(obj);
}