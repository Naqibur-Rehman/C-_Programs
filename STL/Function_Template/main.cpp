#include <iostream>
#include <string>

// using namespace std;

template <typename T> 
T min(T a, T b){
    return (a < b) ? a : b;
} 

template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct Person{                                      // struct and class works similar
    std::string name;
    int age;
     bool operator < (const Person &rhs) const{
        return this->age < rhs.age;
    }
};

std::ostream &operator << (std::ostream &os, const Person &p){
    os << p.name;
    return os;
}

template <typename T>
void my_swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x{100};
    int y{200};
    std::cout << x << ", " << y << std::endl;
    my_swap(x,y);
    std::cout << x << ", " << y << std::endl;

    std::string name{"kala"};
    std::string name1{"bhalu"};
    std::cout << name << ", " << name1 << std::endl;
    my_swap(name, name1);
    std::cout << name << ", " << name1 << std::endl;

    Person p1{"Kala", 17};
    Person p2{"Bandar", 10};

    Person p3 = min(p1, p2);
    std::cout << p3.name << " is younger" << std::endl;

    func(p1,p2);

    std::cout << min<int>(2, 3) << std::endl;       //2
    std::cout << min(2, 3) << std::endl;            //2
    std::cout << min('A', 'B') << std::endl;        //A
    std::cout << min(12.5, 9.2) << std::endl;       //9.2
    std::cout << min(5 + 2*2, 7+40) << std::endl;   //9

    func<int, int>(10,20);
    func(20, 30);
    func<char, double>('A', 30.24);
    func('A', 12.3);
    func(1000,"Testing");
    func(2000, std::string{"Frank"});

    return 0;
}
