#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring
{
private:
    char *str;
public:
    Mystring();                        // ctor
    Mystring(const char *s);           // ctor overload
    Mystring(const Mystring &source);  // copy ctor
    ~Mystring();

    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // _MYSTRING_H_
