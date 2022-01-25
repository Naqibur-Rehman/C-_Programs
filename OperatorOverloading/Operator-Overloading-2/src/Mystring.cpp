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
//        std::cout << "Copy constructor used " << std::endl;
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
    }

//move ctor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
    }

//Destructor
Mystring::~Mystring(){
    delete [] str;
}

//copy assignment
 Mystring &Mystring::operator=(const Mystring &rhs){
//    std::cout << "Using copy assignment " << std::endl;
    if(this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
 }

 // move assignment
 Mystring &Mystring::operator = (Mystring &&rhs){
//    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
 }

 // equality
 bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str)== 0);
 }

 // not equal to
 bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str)!= 0);
 }

 // less than
 bool operator<(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) < 0);
 }

 // greater than
 bool operator>(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str) > 0);
 }

 //make lowercase
 Mystring operator-(const Mystring &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for(size_t i=0; i< std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
 }

 //concatenate
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
   char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
   std::strcpy(buff, lhs.str);
   std::strcat(buff, rhs.str);
   Mystring temp {buff};
   delete buff;
   return temp;
}

// concatenate and assign
Mystring &operator += (Mystring &lhs, const Mystring &rhs){
   lhs = lhs + rhs;
   return lhs;
}

//Repeat
Mystring operator * (const Mystring &lhs, int n){
    Mystring temp;
    for(int i=1; i<=n; i++)
        temp = temp + lhs;
    return temp;
/*
    char *buff = new char[n*std::strlen(lhs.str) + 1];
    std::strcpy(buff, lhs.str);
    for(int i=1; i<n; i++)
        std::strcat(buff, lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
*/
}

//Repeat and assign
Mystring &operator *= (Mystring &lhs, int n){
    lhs = lhs * n;
    return lhs;
}

// pre- increment make string uppercase
Mystring &operator ++ (Mystring &obj){
    for(size_t i=0; i<std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}

//post- increment make string upper case
Mystring operator ++ (Mystring &obj, int){
    Mystring temp {obj};
    ++obj;
    return temp;
}

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
