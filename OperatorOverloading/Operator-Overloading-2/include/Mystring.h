#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
    friend Mystring operator - (const Mystring &obj);                        //make lowercase
    friend Mystring operator + (const Mystring &lhs, const Mystring &rhs);     // concatenate
    friend Mystring &operator += (Mystring &lhs, const Mystring &rhs);         // concatenate and assign s2 += s3;
    friend bool operator == (const Mystring &lhs, const Mystring &rhs);        // equality
    friend bool operator != (const Mystring &lhs, const Mystring &rhs);        // not equal to
    friend bool operator < (const Mystring &lhs, const Mystring &rhs);         //  less than
    friend bool operator > (const Mystring &lhs, const Mystring &rhs);         // more than
    friend Mystring operator * (const Mystring &lhs, int n);          //repeat s2 n times s1 = s2*3
    friend Mystring &operator *= (Mystring &lhs, int n);              //repeat s2 n times and assign in s2 *= 3;
    friend Mystring &operator ++ (Mystring &obj);                            // pre- increment ++s1;
    friend Mystring operator ++ (Mystring &obj, int);                          // post- increment ++s2;
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;
public:
    Mystring();                                          //no-arg ctor
    Mystring(const char *s);                             //one-arg ctor overload
    Mystring(const Mystring &source);                    // copy ctor
    Mystring(Mystring &&source);                         // move constructor
    ~Mystring();                                         //  destructor

    Mystring &operator = (const Mystring &rhs);          //copy assignment
    Mystring &operator = (Mystring &&rhs);               //move assignment

};

#endif // MYSTRING_H
