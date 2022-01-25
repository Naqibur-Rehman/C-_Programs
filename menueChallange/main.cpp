#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char choice {};
    vector <int> numbers {};

    do{
       cout << "\nP - Print numbers" << endl;
       cout << "A - Add numbers" << endl;
       cout << "M - Display mean numbers" << endl;
       cout << "S - Display smallest numbers" << endl;
       cout << "L - Display largest numbers" << endl;
       cout << "Q - Quit" << endl;
       cout << "\nEnter your choice : ";
       cin >> choice;

       switch(choice){
       case 'p':
       case 'P':
        {   if (numbers.size() != 0){
                cout << "[ ";
                for(auto val : numbers)
                    cout << val << " ";
                cout << "]" << endl;
            }
            else
                cout << "[] list is empty" << endl;
            break;
        }
       case 'A':
       case 'a':
           {   int num {};
               cout << "Enter a integer to add to list : ";
               cin >> num;
               numbers.push_back(num);
               cout << num << " added" << endl;
               break;
           }
       case 'm':
       case 'M':
        {   float mean {};
            if(numbers.size() == 0)
                cout << "Unable to calculate mean - no data" << endl;
            else{
            for (auto val : numbers)
                mean += val;
            mean = mean/numbers.size();
            cout << "The mean is : " << mean << endl;
            }
            break;
        }
       case 's':
       case 'S':
        {   int smallest {};
            smallest = numbers.at(0);
            if(numbers.size() == 0)
                cout << "Unable to determine smallest - list is empty" << endl;
            else{
            for (auto val : numbers ){
                if(smallest > val)
                    smallest = val;
                    }
            }
            cout << "The smallest number is : " << smallest << endl;
            break;
        }
       case 'l':
       case 'L':
        {   int largest {};
            largest = numbers.at(0);
            if(numbers.size() == 0)
                cout << "Unable to determine largest - list is empty" << endl;
            else {
            for (auto val : numbers ){
                if(largest < val)
                    largest = val;
                    }
                }
            cout << "The largest number is : " << largest << endl;
            break;
        }
       case 'q':
       case 'Q':
           cout << "\nGoodbye..." << endl;
           break;
       default :
           cout << "Unknown selection, please try again" << endl;
       }
    }while(choice != 'q' && choice != 'Q');

    return 0;
}
