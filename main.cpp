#include <iostream>
#include <cassert>
#include <climits>
#include <string>

// A simple function to test
int add(int a, int b) {
    return a + b;
}

// A simple test function
void runTests() {
    std::cout << "Running unit tests..." << std::endl;

    // Basic positive addition
    assert(add(2, 3) == 5);
    assert(add(10, 20) == 30);

    // Adding zero
    assert(add(0, 0) == 0);
    assert(add(5, 0) == 5);
    assert(add(0, 5) == 5);

    // Negative numbers
    assert(add(-1, 1) == 0);
    assert(add(-3, -7) == -10);
    assert(add(-5, 3) == -2);
    assert(add(5, -3) == 2);

    // Large numbers
    assert(add(1000000, 2000000) == 3000000);
    assert(add(-1000000, 1000000) == 0);

    // Boundary values
    assert(add(INT_MAX, 0) == INT_MAX);
    assert(add(INT_MIN, 0) == INT_MIN);

    std::cout << "All tests passed!" << std::endl;
}

int main(int argc, char* argv[]) {
    // If we pass an argument "test", run the tests. Otherwise, run normal program.
    if (argc > 1 && std::string(argv[1]) == "test") {
        runTests();
    } else {
        std::cout << "Hello from your C++ System!" << std::endl;
        std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    }
    return 0;
}