#include <iostream>
#include <fstream>
#include <iomanip>

// using namespace std;

void print_header(){
    std::cout << std::setw(15) << std::left << "Name"
              << std::setw(5) << std::left <<"Score"
              <<std::endl;

    std::cout << std::setw(20) << std::setfill('-') <<"" << std::endl;
    std::cout << std::setfill(' ');
}

int calc_score(const std::string &response, const std::string &ans_key){
    int score {0};
    for(size_t i=0; i<ans_key.size(); i++){
        if(response.at(i)==ans_key.at(i))
            score++;
       }
    return score;
}

double calc_average(const int number_of_students, int total_score){
    double average{0};
    average = static_cast<double>(total_score)/number_of_students;
    return average; 
}

void print_student(const std::string &student_name, int score){
    std::cout << std::setprecision(1) << std::fixed;
    std::cout << std::setw(15) << std::left << student_name 
              << std::setw(5) << std::right << score << std::endl;
}

void print_footer(double average){
    std::cout << std::setw(20) << std::setfill('-') <<"" << std::endl;
    std::cout << std::setfill(' ');

    std::cout << std::setw(15) << std::left << "Average Score"
              << std::setw(5) << std::right << average
              <<std::endl;
}

int main()
{
    std::fstream in_file;
    std::string ans_key;
    std::string student_ans;
    std::string name;
    int number_of_students {0};
    int score{0};
    int total_score{0};
    double average{0.0};

    in_file.open("response.txt");
    if(!in_file){
        std::cerr << "Problem in opening file" << std::endl;
        return 1;
    }
    
    in_file >> ans_key;

    print_header();

    while(in_file >> name >> student_ans){
        number_of_students ++;
        score = calc_score(student_ans, ans_key);
        total_score += score;
        print_student(name, score); 
    }

    if(number_of_students!=00)
        average = calc_average(number_of_students, total_score);

    print_footer(average);

    in_file.close();
    return 0;
}