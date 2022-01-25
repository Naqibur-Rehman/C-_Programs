#include <iostream>

using namespace std;

int main()
{
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};

    int cents {0},dollars {0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    cout << "Enter an amount in cents : ";
    cin >> cents;

    dollars = cents / dollar_value;
    cents %= dollar_value;

    quarters = cents / quarter_value;
    cents %= quarter_value;

    dimes = cents / dime_value;
    cents %= dime_value;

    nickels = cents / nickel_value;
    cents %= nickel_value;

    pennies = cents;

    cout << "dollars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;

    return 0;
}
