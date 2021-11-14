#include <iostream>

int main()
{
    long long n, k = 1;
    std::cin >> n;

    if (n >= 0) {
        for (long long i = 1; i <= n; i++) {
            k = k * (4 * i - 2) / (i + 1);
        }

        std::cout << k;
    }
    else {
        std::cout << "N is negetive.";
    }


}
