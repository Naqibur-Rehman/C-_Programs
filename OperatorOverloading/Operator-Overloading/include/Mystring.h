#ifndef MYSTRING_H
#define MYSTRING_H


class Mystring
{
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

    Mystring operator - () const;                        //make lowercase
    Mystring operator + (const Mystring &rhs) const;     // concatenate
    Mystring &operator += (const Mystring &rhs);    // concatenate and assign s2 += s3;
    bool operator == (const Mystring &rhs) const;        // equality
    bool operator != (const Mystring &rhs) const;        // not equal to
    bool operator < (const Mystring &rhs) const;         //  less than
    bool operator > (const Mystring &rhs) const;         // more than
    Mystring operator * (const size_t n) const;          //repeat s2 n times s1 = s2*3
    Mystring &operator *= (const size_t n);         //repeat s2 n times and assign in s2 *= 3;
    Mystring &operator ++ ();                            // pre- increment ++s1;
    Mystring operator ++ (int);                          // post- increment ++s2;

    void display() const;

    int get_length() const;                              //getters
    const char *get_str() const;

};


#endif // MYSTRING_H
