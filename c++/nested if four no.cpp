#include <iostream>

int main() {
    int A = 100, B = 200, C = 300, D = 400;

    if (A > B) {
        if (A > C) {
            if (A > D) {
                std::cout << "A is the largest number: ";
            } else {
                std::cout << "D is the largest number: ";
            }
        } else {
            if (C > D) {
                std::cout << "C is the largest number: ";
            } else {
                std::cout << "D is the largest number: ";
            }
        }
    } else {
        if (B > C) {
            if (B > D) {
                std::cout << "B is the largest number: ";
            } else {
                std::cout << "D is the largest number: ";
            }
        } else {
            if (C > D) {
                std::cout << "C is the largest number: ";
            } else {
                std::cout << "D is the largest number: ";
            }
        }
    }

    return 0;
}
