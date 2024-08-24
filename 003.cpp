//file 003.cpp   (Zminni, print ...)
//lessons 04 {@pathtocpp cpp}

#include <iostream>

int main()
{
	int a;
    a = 10;
    int b = 20;

    std::cout << a << std::endl;
    std::cout << std::endl;
        
    float c = (float) a / (float) b;
    std::cout << c << std::endl;
    std::cout << std::endl;

    std::string str = "Sasha";
    std::cout << str << std::endl;
    std::cout << std::endl;

    std::string name;
    std::cout << "Plese write your nsme" << std::endl;
    std::cin >> name;
    std::cout << "Hello  " << name << " !" << std::endl;
    std::cout << std::endl;
    
    float pi =3.14;
    std::cout << "Pi = " << pi << std::endl;
    std::cout << std::endl;
}
