#include <iostream>
#include <cmath>

int main() {
    double x, epsilon;
    std::cout << "Enter x (-1 < x < 1): ";
    std::cin >> x;
    std::cout << "Enter epsilon: ";
    std::cin >> epsilon;

    if (std::abs(x) >= 1) {
        std::cout << "x must be in range (-1, 1)" << std::endl;
        return 0;
    }
    double sum = 0.0;
    double a = x;
    int n = 0;

    while (std::abs(a) > epsilon) {
        sum += a;
        n++;
        a *= (x * x) * (2 * n - 1) / (2 * n + 1);
    }
    double approx = 2 * sum;
    double real_val = std::log((1 + x) / (1 - x));

    std::cout << "Approx ln((1+x)/(1-x)) = " << approx << std::endl;
    std::cout << "Real ln((1+x)/(1-x))   = " << real_val << std::endl;
    std::cout << "Iterations: " << n << std::endl;

    return 0;
}