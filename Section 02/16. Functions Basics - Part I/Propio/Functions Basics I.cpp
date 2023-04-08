#include <iostream>
#include "math.h"

int main() {
    int x, y;
    std::cin >> x >> y;
    //int result = x + y;
    //std::cout << "Result is: " << result << std::endl;
    int result = Add(x, y);
    
    //Use result
    return 0;
}
