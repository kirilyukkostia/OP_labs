#include <iostream>

int main()
{
    const int n = 2, p = 4;     //
    int a;

    std::cin >> a;

    if (a > 0) {
        double x = 1;
        for (int i = 0; i < p; i++) {
            x = (((n - 1) * x) + a / pow(x, n - 1)) / n;
        }
        printf("%.4f", x);
    }
    else
        std::cout << "Number is negative or equal 0";
}
