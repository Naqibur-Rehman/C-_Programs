#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base()
      :value{0} {
          cout << "Base no-args constructor" << endl;
    }

    Base(int x)
      :value{x}{
          cout << "Base (int) overloaded constructor" << endl;
    }

    Base (const Base &other)
        :value{other.value}{
            cout << "Base copy constructor " << endl;
        }

    Base &operator=(const Base &rhs){
        cout << "Base operator= " << endl;
        if(this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }

    ~Base(){
        cout << "Base Destructor "<< endl;
    }
};

class Derived: public Base{
private:
    int double_value;
public:
    Derived()
        :Base{}, double_value{0}{
            cout << "Derived no-args constructor" << endl;
    }

    Derived(int x)
        :Base{x}, double_value{x*2}{
            cout << "Derived (int) overloaded constructor" << endl;
    }

    Derived(const Derived &other)
        :Base(other), double_value{other.double_value}{
            cout << "Derived copy constructor" << endl;
        }
    Derived &operator=(const Derived &rhs){
        cout << "Derived operator=" << endl;
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this;
    }

    ~Derived(){
        cout << "Derived destructor" << endl;
    }

};

int main()
{
    Base b{100};        //overloaded constructor
    Base b1{b};         //copy ctor
    b = b1;             //copy assignment

    Derived d{100};   //overloaded constructor
    Derived d1{d};    //copy ctor
    d = d1;           //copy assignment

    return 0;
}
