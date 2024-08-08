#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <unordered_map>



void Print(std::vector<int> data, std::string gap) {
    int counter = 0;
    //auto last = data.rbegin();
    for (auto i : data) {
        counter++;
        
    }
    int j = 0;
    for (auto i : data) {
        j++;
        if (j == counter) {
            std::cout << i;
        }
        else {


            std::cout << i << gap;
        }
    }
    std::cout << "\n";
}



int main() {
    std::vector<int> data = { 1, 2, 3, 4 };
    Print(data, ", ");  // 1, 2, 3, 4

    return 0;
}
