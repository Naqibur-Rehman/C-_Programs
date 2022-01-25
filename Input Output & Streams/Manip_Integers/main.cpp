#include <iostream>
#include <iomanip>
// using namespace std;

int main()
{
    int num{255};

    // displaying uing diffferent bases
    std::cout << "\n===================================" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // displaying uing diffferent bases
    std::cout << "\n===================================" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // displaying hex value in upper case
    std::cout << "\n===================================" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;

    // display the +sign in front of positive base 10 numbers
    std::cout << "\n===================================" << std::endl;
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    //setting using set method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    //resetting to defaults
    std::cout << std::resetiosflags(std::ios::basefield);
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::uppercase);

    std::cout << "\n===========================================" << std::endl;
    std::cout << "Enter ann integer: ";
    std::cin >> num;

    std::cout << "Decimal Default: " << num << std::endl;

    std::cout << "Hexadecimal   : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal   : " << std::hex << std::uppercase << num << std::endl;
    std::cout << "Hexadecimal   : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal   : " << std::hex << std::nouppercase << num << std::endl;

    std::cout <<"Octal          : " << std::oct <<  num << std::endl;
    std::cout << "Hexadecimal   : " << std::hex << std::showbase << num << std::endl;
    std::cout <<"Octal          : " << std::oct <<  num << std::endl;

    std::cout << std::endl << std::endl;

    return 0;
}
