#include <iostream>

using namespace std;

void swap(int *x, int *y) {
   int temp;
   temp = *x; /* guarda el valor de x */
   int* temp2 = x;
   cout << temp << endl;
   cout << temp2 << endl;
   *x = *y; /* guarda el valor de y en x */
   *y = temp; /* guarda el valor de temp en y */
  
   return;
}

// Add two numbers and return the sum
int Add(int *a, int *b) {
    return *a + *b;
}

// Add two numbers and return the sum through the third pointer argument
void AddVal(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Swap the value of two integers
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Generate the factorial of a number and return that through the second
// pointer argument
void Factorial(int *a, int *result) {
    int temp = 1;
    for (int i = 1; i <= *a; i++) {
        temp *= i;
    }
    *result = temp;
}

int main() {
    int a = 4;
    int b = 5;
    int result = 0;
    cout << a << b << endl;
    swap(&a, &b);
    cout << a << b << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << b << endl;
    int add = Add(&a, &b);
    cout << a << b << add << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << b << result << endl;
    AddVal(&a, &b, &result);
    cout << a << b << result << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << b << endl;
    Swap(&a, &b);
    cout << a << b << endl << endl;

    a = 4;
    b = 5;
    result = 0;
    cout << a << result << endl;
    Factorial(&a, &result);
    cout << a << result << endl << endl;

    return 0;
}