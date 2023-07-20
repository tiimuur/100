#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(215, 0);
    numbers[2] = 1;
    for(int i = 2; i < 108; ++i){
        numbers[i * 2] += numbers[i];
        if(!(i % 3)){
            numbers[i + 3] += numbers[i];
        } else {
            numbers[i + (i % 3)] += numbers[i];
        }
    }
    std::cout << numbers[107];
    return 0;
}
