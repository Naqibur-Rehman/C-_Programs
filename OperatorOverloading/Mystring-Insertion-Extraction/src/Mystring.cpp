#include <iostream>
#include <cstring>
#include "Mystring.h"


Mystring::Mystring()
    :str{nullptr}{
        str = new char [1];
        *str = '\0';
    }

// overload ctor
Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }else{
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
    }

//copy ctor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        std::cout << "Copy constructor used " << std::endl;
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
    }

//move ctor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }

//Destructor
Mystring::~Mystring(){
    delete [] str;
}

//copy assignment
 Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Using copy assignment " << std::endl;
    if(this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
 }

 // move assignment
 Mystring &Mystring::operator = (Mystring &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
 }

//Display method
void Mystring::display() const {
    std::cout << str <<" : " << get_length() << std::endl;
}

//getters
int Mystring::get_length() const {return std::strlen(str);}
const char *Mystring::get_str() const {return str;}

//overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

//overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring {buff};
    delete [] buff;
    return in;
}
