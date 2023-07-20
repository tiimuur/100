#include <iostream>
#include <vector>
#include <cmath>
int main() {
    std::vector<int> numbers(2317, 0);
    numbers[2316] = 1;
    for(int i = 2316; i > 4; --i){
        if(i == 11){
            for(int j = 0; j < 11; ++j){
                numbers[j] = 0;
            }
        }
        if(i - 7 >= 0){
            numbers[i - 7] += numbers[i];
        }
        numbers[(int)(log(i)/log(2))] += numbers[i];
    }
    std::cout << numbers[4];
    return 0;
}
