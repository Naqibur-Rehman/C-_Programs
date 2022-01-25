#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

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

    void display() const;

    int get_length() const;                             //getters
    const char *get_str() const;

};


#endif // MYSTRING_H
