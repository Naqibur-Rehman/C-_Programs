#include <iostream>
#include <vector>

using namespace std;

// display menu and get selection
void display_menue();
char get_choice();

//menu handling
void print_list(const vector <int> &v);
void add_numbers(vector <int> &v);
void mean(const vector <int> &v);
void largest(const vector <int> &v);
void smallest(const vector <int> &v);
void find_num(const vector <int> &v);
void quit();
void unknown();

//functions doing actual work , calculations
void display_list(const vector <int> &v);
double calc_mean(const vector <int> &v);
int calc_largest(const vector <int> &v);
int calc_small(const vector <int> &v);
bool find(const vector <int> &v, int terget);


int main()
{
    char choice {};
    vector <int> numbers {};

    do{
        display_menue();
        choice  = get_choice();

        switch(choice){
            case 'P': print_list(numbers);
                      break;
            case 'A': add_numbers(numbers);
                      break;
            case 'M': mean(numbers);
                      break;
            case 'S': smallest(numbers);
                      break;
            case 'L': largest(numbers);
                      break;
            case 'F': find_num(numbers);
                      break;
            case 'Q': quit();
                      break;
            default : unknown();
       }
    }while(choice != 'Q');

    return 0;
}

//display menu option
void display_menue()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add numbers" << endl;
    cout << "M - Display mean numbers" << endl;
    cout << "S - Display smallest numbers" << endl;
    cout << "L - Display largest numbers" << endl;
    cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice : ";
}

//get user selection
char get_choice()
{
    char choice;
    cin >> choice;
    return toupper(choice);
}

//print the list
void print_list(const vector <int> &v)
{
    if (v.size() == 0)
        cout << "[] list is empty" << endl;
    else
        display_list(v);
}

//add a number to list
void add_numbers(vector <int> &v)
{
    int num {};
    cout << "Enter a integer to add to list : ";
    cin >> num;
    v.push_back(num);
    cout << num << " added" << endl;
}

//display mean of numbers
void mean(const vector <int> &v)
{
    if(v.size() == 0)
        cout << "Unable to calculate mean - no data" << endl;
    else
        cout << "The mean is : " << calc_mean(v) << endl;
}

// display largest number
void largest(const vector <int> &v)
{
    if(v.size() == 0)
        cout << "Unable to determine largest - list is empty" << endl;
    else
        cout << "The largest number is : " << calc_largest(v) << endl;
}

//display smallest number
void smallest(const vector <int> &v)
{
    if(v.size() == 0)
        cout << "Unable to determine smallest - list is empty" << endl;
    else
        cout << "The smallest number is : " << calc_small(v) << endl;
}

void quit()
{
    cout << "\nGoodbye..." << endl;
}

void unknown()
{
    cout << "Unknown selection, please try again" << endl;
}

void find_num(const vector <int> &v)
{
    int target {};
    cout << "Enter the number to find: ";
    cin >> target;
    if(find(v, target))
        cout << target << " was found" << endl;
    else
        cout << target << " was not found" << endl;
}

// calculate mean of numbers
double calc_mean(const vector <int> &v)
{
    double mean_num {};
    for (auto val : v)
        mean_num += val;
    mean_num = mean_num/v.size();
    return mean_num;
}

//calculate largest number
int calc_largest(const vector <int> &v)
{
    int large {};
    large = v.at(0);
    for (auto val : v )
        if(large < val)
            large = val;
    return large;
}

// calculate smallest number
int calc_small(const vector <int> &v)
{
    int small {};
    small = v.at(0);
    for (auto val : v )
        if(small > val)
            small = val;
    return small;
}

// display list in correct format
void display_list(const vector <int> &v)
{
    cout << "[ ";
    for(auto val : v)
        cout << val << " ";
    cout << "]" << endl;
}

bool find(const vector <int> &v, int target)
{
    for(auto num: v)
        if (num == target)
            return true;
    return false;
}
