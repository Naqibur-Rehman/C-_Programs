#include <iostream>

using namespace std;

int main()
{
    int width {0};
    int length {0};
    cout << "Enter width and length of room: ";
    cin >> width >> length;
    cout << "Area : " << width*length <<" sq ft";
    return 0;
}
