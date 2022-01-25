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

 // equality comparsion
 bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) == 0);
 }

 //make lowercase
 Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i=0; i< std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
 }

 //concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
   char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
   std::strcpy(buff, str);
   std::strcat(buff, rhs.str);
   Mystring temp {buff};
   delete buff;
   return temp;
}

//Display method
void Mystring::display() const {
    std::cout << str <<" : " << get_length() << std::endl;
}

//getters
int Mystring::get_length() const {return std::strlen(str);}
const char *Mystring::get_str() const {return str;}
