#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main(int, char**) {
    std::cout << "1 + 2 = " << add(1, 2) << std::endl;
}
