#include <iostream>

int main() {
    int A = 100;
    int B = 200;
    int C = 300;

    if (A >= B) {
        if (A >= C) {
            std::cout << "A is the largest number: ";
        } else {
            std::cout << "C is the largest number: ";
        }
    } else {
        if (B >= C) {
            std::cout << "B is the largest number: ";
        } else {
            std::cout << "C is the largest number: ";
        }
    }

    return 0;
}
