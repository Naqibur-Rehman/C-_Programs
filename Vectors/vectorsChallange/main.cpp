#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector_1;
    vector <int> vector_2;

    vector_1.push_back(10);
    vector_1.push_back(20);

    cout << "Vector 1 : " << endl;
    cout << vector_1.at(0) << endl;
    cout << vector_1.at(1) << endl;
    cout << "Vector 1 contains " << vector_1.size() << "  elements" << endl;

    vector_2.push_back(100);
    vector_2.push_back(200);

    cout << "\nVector 2 : " << endl;
    cout << vector_2.at(0) << endl;
    cout << vector_2.at(1) << endl;
    cout << "Vector 2 contains " << vector_2.size() << " elements" << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector_1);
    vector_2d.push_back(vector_2);

    cout << "\nVector 2d : " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "Vector 2d contains : " << vector_2d.size() <<" element" << endl;

    vector_1.at(0) = 1000;

    cout << "\nVector 2d : " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "\nVector 1 : " << endl;
    cout << vector_1.at(0) << endl;
    cout << vector_1.at(1) << endl;

    return 0;
}
