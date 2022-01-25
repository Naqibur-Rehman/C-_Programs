#include <iostream>

using namespace std;

void print(const int *const arr, const size_t size)
{
    cout << "[ ";
    for(size_t i{0}; i < size; i++)
        cout << arr[i] << " ";
    cout <<" ]" << endl;
}

int *apply_all(const int *const arr1, size_t arr1_size, const int *const arr2, size_t arr2_size)
{
    int *new_array {nullptr};

    new_array = new int[arr1_size*arr2_size];

    int position {0};
    for(size_t i{0}; i < arr2_size; i++){
            for(size_t j{0}; j < arr1_size; j++){
                new_array[position] = arr2[i]*arr1[j];
                ++position;
            }
        }
    return new_array;
}

int main()
{
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *result = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t result_size {array1_size * array2_size};

    cout << "Result: ";
    print(result, result_size);

    delete [] result;

    return 0;
}
