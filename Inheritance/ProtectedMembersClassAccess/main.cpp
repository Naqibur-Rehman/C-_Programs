#include <iostream>

using namespace std;

class Base{
// Friends of base have access to all
public:
    int a{};
    void display(){cout<<a<<", "<<b<<", "<<c<<endl;}    //member methods have access to all
protected:
    int b{};
private:
    int c{};
};

class Derived: public Base{
// friends of derived class has access to only what derived has access to

//a will be public
//b will protected
//c will be private but not accessible

public:
    void access_base_members(){
        a = 600;    //OK
        b = 200;    //Ok
//        c = 300;    //compiler error
    }

};

int main()
{
    cout << "=== Base member access from base objects =============" << endl;
    Base base;
    base.a = 100;   //OK
//    base.b = 200;   //compiler error
//    base.c = 300;   //compiler error

    cout << "=== Base member access from derived objects =============" << endl;
    Derived d;
    d.a = 100;  //OK
//    d.b = 200;  //compiler error
//    d.c = 300;  //compiler error
    return 0;
}
