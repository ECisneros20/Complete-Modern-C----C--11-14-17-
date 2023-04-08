#include <iostream>

int main() {
    int a = 6;
    int *b = &a;
    // No se puede realizar esta operación
    // int c = &a;
    std::cout << a << "\n" << b << "\n" << *b << "\n" << &b << "\n";
    
    return 0;
}
