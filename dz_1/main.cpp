#include <iostream>
#include "CPT.h"

int main()
{
    int value;
    std::cout << "Enter value: ";
    std::cin >> value;

    std::pair<int, int> result = closest_pair_tonum(value);
    
    if (result.first != 0 && result.second != 0) {
        std::cout << "Result: (" << result.first << ", " << result.second << ")" << std::endl;
    } else {
        std::cout << "No valid pair found for value: " << value << std::endl;
    }

    return 0;
}