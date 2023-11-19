#include <iostream>
#include <vector>

std::vector<int> numbers_larger_than_n(int arr[], int size, int n) {
    std::vector<int> result;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > n) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int array[] = {1, 5, 9, 3, 7, 11, 2, 8, 4};
    int n = 6;
    
    std::vector<int> result = numbers_larger_than_n(array, sizeof(array)/sizeof(array[0]), n);

    std::cout << "Numbers larger than " << n << " are: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}