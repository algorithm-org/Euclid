#include <iostream>

int euclid(int m, int n) {
    int r{0};
    r = m % n;

    if (r == 0) {
        std::cout << "m=" << m << " n=" << n << " r=" << r << "\n\n";
        return n;
    }
    else {
        std::cout << "m=" << m << " n=" << n << " r=" << r << "\n";
        return euclid(n, r);
    }
}

int main() {
    std::cout << euclid(119, 544) << "\n";
    return 0;
}
