#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test{
private:
    int data;
public:
    Test(): data{0} {std::cout<<"\tTest constructor(" << data <<")" << std::endl;}
    Test(int data): data{data} {std::cout<<"\tTest constructor (" << data << ")"<< std::endl;}
    int get_data() const {return data;}
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl;}
};

//function prototype
//std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();           //or
auto make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);


auto make(){
//    std::unique_ptr<vector<shared_ptr<Test>>> ptr2 = make_unique<vector<shared_ptr<Test>>>();
//    return ptr2;
        //or
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    for(auto i=1; i<=num; i++){
        cout << "Enter data point[" << i << "] : ";
        int data;
        cin >> data;
//        std::shared_ptr<Test> ptr = make_shared<Test>(data);
//        vec.push_back(ptr);
        vec.push_back(std::make_shared<Test>(data));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
    cout <<"\nDisplaying Vector Data" << endl;
    cout << "=====================" << endl;
    for(const auto &v:vec)
        std::cout<< v->get_data() << std::endl;
    cout << "=====================" << endl;
}

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}
