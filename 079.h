#ifndef MY_CLASS_H
#define MY_CLASS_H
#include <iostream>>

template <class T> // Ogoloshuyemo type
class My_class
{
    T m_data;

public:
    My_class() : m_data(0) {}
    My_class(T data) : m_data(data) {}
    void set_data(T data)
    {
        m_data = data;
    }
    T get_data() const
    {
        return m_data;
    }
};

template <class T>
std::ostream& operator<< (std::ostream& os,My_class<T> obj)
{
    os << "Data: " << obj.get_data() << "\n";   
}

#endif