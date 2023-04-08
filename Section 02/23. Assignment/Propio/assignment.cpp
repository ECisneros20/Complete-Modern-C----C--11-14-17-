#include <iostream>

// Add two numbers and return the result through a reference parameter
void Add(int a, int b, int &result) {
    result = a + b;
}

// Find factorial of a number and return that through a reference
// parameter
void Factorial(int a, int &result) {
    result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
}

// Swap two numbers through reference arguments
void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    using namespace std;

    int a = 4;
    int b = 5;
    int result = 0;
    cout << a << b << result << endl;
    Add(a, b, result);
    cout << a << b << result << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << b << result << endl;
    Factorial(a, result);
    cout << a << b << result << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << b << result << endl;
    Swap(a, b);
    cout << a << b << result << endl << endl;

    return 0;
}