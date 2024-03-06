#include <iostream>
#include <cmath>

double pi_aprox(int n) {
    double result = 0.0;
    for (int k = 0; k < n; ++k) {
        result += (std::pow(16, -k) * (4.0 / (8 * k + 1) - 2.0 / (8 * k + 4) - 1.0 / (8 * k + 5) - 1.0 / (8 * k + 6)));
    }
    return result;
}

int main() {
	
	std::cout.precision(16);
    std::cout.setf(std::ios::scientific);
    
    for (int n = 1; n <= 20; ++n) {
        double pi_result = pi_aprox(n);
        double relative_difference = std::abs(1 - pi_result / M_PI);

        std::cout << "n: " << n << ", pi_aprox(n): " << pi_result << ", Relative Difference: " << relative_difference << std::endl;
    }
    return 0;
}


