#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base cases
    if (n <= 1)
        return n;
    
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative number" << endl;
        return 1;
    }
    
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}