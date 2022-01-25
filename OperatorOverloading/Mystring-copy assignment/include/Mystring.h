#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
private:
    char *str;
public:
    Mystring();                        //no-arg ctor
    Mystring(const char *s);           //one-arg ctor overload
    Mystring(const Mystring &source);  // copy ctor
    ~Mystring();                       //  destructor

    Mystring &operator = (const Mystring &rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
