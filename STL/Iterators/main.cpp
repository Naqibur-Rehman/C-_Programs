#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

// display any vector of integers using range basedc for loop
void display(const std::vector<int> &vec){
    std::cout << "[ ";
    for(auto const &i:vec){
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1(){
    std::cout << "\n=====================================" <<  std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it = nums1.begin();            // points to 1
    std::cout << *it << std::endl;

    it++;                               // points to 2
    std::cout << *it << std::endl;

    it += 2;                            // points to 4
    std::cout << *it << std::endl;

    it -= 2;                            // points to 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1;               // points to 5
    std::cout << *it << std::endl;
}

void test2(){
    std::cout << "\n=====================================" <<  std::endl;
    //display all vector elements using iterator 

    std::vector<int> nums1 {1,2,3,4,5};
    
    std::vector<int>::iterator it = nums1.begin();
    while(it != nums1.end()){
        std::cout << *it << std::endl;
        it++;
    }

    // changfe allvector elements equal to zero
    it = nums1.begin();
    while(it != nums1.end()){
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3(){

    // using a const iterator

    std::cout << "\n===========================" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};

    std::vector<int>::const_iterator it1 = nums1.begin();
    //auto it1 = nums1.cbegin();

    while (it1 != nums1.end())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }
    
    // compiler when we try to change element
    it1 = nums1.begin();
    while(it1 != nums1.end()){
        // *it1 = 0;     // compiler error- read only
        it1++;
    }

}

void test4(){
    //more iterators
    // using a reverse iterator
    std::vector<int> vec{1,2,3};
    auto it1 = vec.rbegin();        // reverse iterator over vector of ints start at 4
    while(it1 != vec.rend()){
        std::cout << *it1 << std::endl;
        it1++;
    }

    // conbst reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "curly"};
    auto it2 = name.crbegin();      // itetrator over list of strings point to Curly
    std::cout << *it2 << std::endl;
    it2++;  // point to Moe
    std::cout << *it2 << std::endl;

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Naqeeb", "C++"},
        {"Ahsan", "Java"},
        {"Aadil", "Ruby"}
    };

    auto it3 = favorites.begin();       // iterator over a map of string, string pairs
    while(it3 != favorites.end()){
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}

void test5(){
    //iterator over a subset of a container
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while(start != finish){
        std::cout << *start << std::endl;
        start++;
    }
}

int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}
