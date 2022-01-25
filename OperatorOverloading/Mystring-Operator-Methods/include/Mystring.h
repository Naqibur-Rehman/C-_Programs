#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
private:
    char *str;
public:
    Mystring();                                         //no-arg ctor
    Mystring(const char *s);                            //one-arg ctor overload
    Mystring(const Mystring &source);                   // copy ctor
    Mystring(Mystring &&source);                        // move constructor
    ~Mystring();                                        //  destructor

    Mystring &operator = (const Mystring &rhs);         //copy assignment
    Mystring &operator = (Mystring &&rhs);              //move assignment

    Mystring operator - () const;                       //make lowercase
    Mystring operator + (const Mystring &rhs) const;          // concatenate
    bool operator == (const Mystring &rhs) const;         // comparision

    void display() const;

    int get_length() const;                             //getters
    const char *get_str() const;

};

#endif // MYSTRING_H
