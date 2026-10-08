#include <iostream>
#include <cmath>

int main() {
    double a;
    int n;

    std::cout << "Enter a real number a: ";
    std::cin >> a;
    std::cout << "Enter a natural number n (n > 0): ";
    std::cin >> n;

    if (a == 0) {
        std::cout << "Error: ln|0| is undefined!" << std::endl;
        return 1;
    }

    if (n <= 0) {
        std::cout << "Error: n must be a positive integer!" << std::endl;
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += std::log(std::abs(std::pow(a, i)));
    }
    std::cout << "Result: " << sum << std::endl;
    return 0;
}