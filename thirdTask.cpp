#include <iostream>
#include <set>

std::set<int> numbers3, numbersNot3;
void calc(int number, int step){
    if(step == 5){
        if(!(number % 3)){
            numbers3.emplace(number);
        } else {
            numbersNot3.emplace(number);
        }

    } else {
        calc(number + 2, step + 1);
        calc(number + 4, step + 1);
        calc(number * number, step + 1);
    }
}

int main() {
    calc(3, 0);
    std::cout << abs(numbers3.size() - numbersNot3.size());
    return 0;
}
