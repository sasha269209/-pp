//file 004.cpp   (Zminni, matematuchni operatcii ...)
//lessons 04 {@pathtocpp cpp}

#include <iostream>

int main()
{

    int a = 10, b = 20, c = 3, d = 2, e = 4;
    int rez;

    std::cout <<"a = 10, b = 20, c = 3, d = 2, e = 4;" << std::endl;
    rez = a+b-c*e/d;
    std::cout << rez << std::endl;

    std::cout <<"a+b=  " << a+b << std::endl;
    std::cout <<"b-a=  " << b-a << std::endl;
    std::cout <<"d*e=  " << d*e << std::endl;
    std::cout <<"e/d=  " << e/d << std::endl;
    std::cout <<"a%e=  " << a%e << std::endl;
    std::cout <<"++e=  " << ++e << std::endl;
    std::cout <<"a++=  " << a++ << std::endl;
    std::cout <<"a=  " << a << std::endl;
    std::cout <<"b--=  " << b-- << std::endl;
    std::cout <<"b=  " << b << std::endl;

    for (int i = 0; i<3; i++)
        std::cout << " i= " << i;
    std::cout << std::endl;

    for (int i = 0; i<3; ++i)
        std::cout << " i= " << i;
    std::cout << std::endl;

    int k=88;
    std::cout <<"k=  " << k++ << std::endl;
    int f=88;
    std::cout <<"f=  " << ++f << std::endl;



}
