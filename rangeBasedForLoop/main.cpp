#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
//    int scores[] {90, 94, 97};

//    for(int score : scores)
//        cout << score << endl;
//
//    for(auto score : scores)
//        cout << score << endl;

//    vector <double> temperatures {87.9, 77.9, 80.0, 88.3};
//    double average_temp {};
//    double total {};
//
//    for(auto temp : temperatures)
//        total += temp;
//
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
//
//    cout << fixed << setprecision(1);
//    cout << "Average temperature is : " << average_temp << endl;


//    for(auto val : {1, 2, 3, 4})
//        cout << val << endl;

//    for (auto c : "This is a test")
//        if(c != ' ')
//            cout << c;

    for (auto c : "This is a test")
        if(c == ' ')
            cout << "\t";
        else
            cout << c;
    return 0;
}
