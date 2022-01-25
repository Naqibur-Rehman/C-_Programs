#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

// Template function to display any deque
template <typename T>
void display(const std::deque <T> &d){
    std::cout << "\n[ ";
    for(const auto &element:d)
        std::cout << element << " ";
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\nTest===========================" << std::endl;

    std::deque <int> d {1,2,3,4,5};
    display(d);

    d = {2,4,6};
    display(d);

    std::deque <int> d1 (10, 100);       // ten 100s in the deque
    display(d1);

    d[0] = 100;
    d.at(1) = 200;

    display(d);
}

void test2(){
    // push and pops
    std::cout << "\nTest2============================" << std::endl;

    std::deque <int> d {0,0,0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);
    
    d.push_front(100);
    d.push_front(200);
    display(d);

    std::cout << "d front " << d.front() << std::endl;
    std::cout << "d back: " << d.back() << std::endl;
    std::cout << "d size: " << d.size() << std::endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3(){
    std::cout <<"\nTest3==================================" << std::endl;

    // insert even numbers into back and odd numbers in front of deque
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque <int> d ;
    
    for(const auto &elem:vec){
        if(elem %2 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    display(d);
}

void test4(){
    std::cout <<"\nTest4==================================" << std::endl;

    // push_front vs back_ordering
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::deque <int> d ;

    for(const auto &elem:vec){
        d.push_front(elem);
    }
    display(d);

    d.clear();

    for(const auto &elem:vec){
        d.push_back(elem);
    }
    display(d);
}


void test5(){
    // same as test4 but using std::copy
    std::cout << "\nTest5========================" << std::endl;

    std::deque <int> d;
    std::vector <int> vec {1,2,3,4,5,6,7,8,9,10};

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);

    d.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
    
}


int main()
{
    test1();
    test2();
    test3();    
    test4();
    test5();
    return 0;
}
















