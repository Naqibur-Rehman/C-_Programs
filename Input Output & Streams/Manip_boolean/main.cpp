#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    std::cout << "noboolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - defalult (10 == 20): " << (10 == 20) << std::endl;

    //set true/false formatting
    std::cout << std::boolalpha;    // change to true/false
    std::cout << "boolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - defalult (10 == 20): " << (10 == 20) << std::endl;

    // //setting still stays for future boolean insertions 
    std::cout << "boolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - defalult (10 == 20): " << (10 == 20) << std::endl;

    // //Toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - defalult (10 == 20): " << (10 == 20) << std::endl;

    // //set back to true/false using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - defalult (10 == 20): " << (10 == 20) << std::endl; 

    //reset to default which is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "noboolalpha - defalult (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - defalult (10 == 20): " << (10 == 20) << std::endl;
    
    return 0;
}
