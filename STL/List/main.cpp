#include <iostream>
#include <iterator>     // for std::advance
#include <algorithm>
#include <list>


using namespace std;

class Person{
    friend std::ostream &operator << (std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, int age)
        :name{name}, age{age} {}
    bool operator < (const Person &rhs) const {
        return this->age <rhs.age;
    }
    bool operator == (const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator << (std::ostream &os, const Person &p){
    os << p.name << " : " << p.age;
    return os;
}

// Template function to display any list
template <typename T>
void display(const std::list <T> &l){
    std::cout << "\n[ ";
    for(const auto &element:l)
        std::cout << element << " ";
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\nTest===========================" << std::endl;

    std::list <int> l1 {1,2,3,4,5};
    display(l1);

    std::list <std::string> l2;
    l2.push_back("Back");
    l2.push_front("Front");
    display(l2);

    std::list <int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);

    std::list <int> l4 (10, 100);
    display(l4);
}

void test2(){
    std::cout << "\nTest2============================" << std::endl;

    std::list <int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    std::cout << "l1 size: " << l1.size() << std::endl;
    std::cout << "l1 front: " << l1.front() << std::endl;
    std::cout << "l1 back: " << l1.back() << std::endl;

    l1.clear();
    display(l1);
    std::cout << "Size: " << l1.size() << std::endl;
}

void test3(){
    std::cout << "\nTest3===============================" << std::endl;

    std::list <int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    l1.resize(5);
    display(l1);

    l1.resize(10);
    display(l1);

    std::list <Person> persons;
    persons.resize(5);
    display(persons);
}

void test4(){
    std::cout << "\nTest4============================" << std::endl;

    std::list <int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);

    auto it = std::find(l1.begin(), l1.end(), 5);
    if(it != l1.end()){
        l1.insert(it, 100);
    }
    display(l1);

    std::list <int> l2 {1000,2000,3000,4000};
    l1.insert(it, l2.begin(), l2.end());
    display(l1);

    std::advance(it, -4);
    std::cout << *it << std::endl;

    l1.erase(it);      // remove the 100 iterator
    display(l1);

}

void test5(){
    std::cout << "\nTest5============================" << std::endl;

    std::list <Person> stooges {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly",25}
    };
    display(stooges);

    std::string name;
    int age{};
    std::cout << "\nEnter the name of next stooges: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;

    stooges.emplace_back(name,age);
    display(stooges);

    // Insert Frank before Moe
    auto it =std::find(stooges.begin(), stooges.end(), Person{"Moe", 20});
    if(it != stooges.end()){
        stooges.insert(it, Person{"Frank", 20});
        std::cout << *it << std::endl;
    }
    display(stooges);
}

void test6(){
    std::cout << "\nTest6=================================" << std::endl;

    std::list <Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly",17}
    };

    display(stooges);
    stooges.sort();
    display(stooges);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}
















