#include <iostream>
#include <iomanip>

using namespace std;

void ruler(){
    std::cout << "\n12345678901234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}

int main()
{
    int num1 {1234};
    double num2 {1234.5678};
    std::string hello {"Hello"};

    //Defaults
    std::cout << "\n---Defaults-----------------------------------------------------" <<std::endl;
    ruler();
    std::cout << num1 
              << num2
              << hello
              << std::endl;

    std::cout << "\n---Defaults one per line-------------------------------------------------------" << std::endl;
    ruler();
    std::cout << num1 << std::endl;
    std::cout << num2 << std:: endl;
    std::cout << hello << std::endl;
    
    // set field width to 10
    // Note default justification is right for num 1 only!
    std::cout << "\n---width 10 for num1-----------------------------------------------------" << endl;
    ruler();
    std::cout << std::setw(10) << num1 
              << num2
              << hello
              << std::endl;

    // set field width to 10 for first 2 outputs
    // Note default justification is right for num 1 only!
    std::cout << "\n---width 10 for num1 and num2--------------------------------------------------" << endl;
    ruler();
    std::cout << std::setw(10) << num1 
              << std::setw(10) << num2
              << hello
              << std::endl;

    // set field width to 10 for all 3 outputs
    // Note default justification is right for all
    std::cout << "\n---width 10 for num1, num2 and hello--------------------------------------------------" << endl;
    ruler();
    std::cout << std::setw(10) << num1 
              << std::setw(10) << num2
              << std::setw(10) << hello
              << std::endl;
    
    // set field width to 10 for all 3 outputs and justify all left
    std::cout << "\n---width 10 for num1, num2 and hello left for all---------------------------------------" << endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 
              << std::setw(10) << std::left << num2
              << std::setw(10) << std::left << hello
              << std::endl;
    
    // setfill to dash(-)
    // this is persistent
    // Then repeat previous display
    std::cout << std::setfill('-');
    std::cout << "\n---width 10 for num1, num2 and hello left for all setfill to dash------------------------" << endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 
              << std::setw(10) << std::left << num2
              << std::setw(10) << std::left << hello
              << std::endl;

    // set field width to 10 for all 3 outputs and setfill varies
    std::cout << "\n---width 10 for num1, num2 and hello left for all and setfill varies---------------------" << endl;
    ruler();
    std::cout << std::setw(10) << std::left << std::setfill('*') <<  num1 
              << std::setw(10) << std::left << std::setfill('#') << num2
              << std::setw(10) << std::left << std::setfill('=') << hello
              << std::endl;
    
    return 0;
}
