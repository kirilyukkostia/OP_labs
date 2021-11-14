#include <iostream>
#include <cmath>

int main()
{
    const double e = 0.0001; 
    int a;                   

    std::cin >> a;

    if (a > 0) {
        double y, x = 1, l;
        do {
            y = x;
            x = (x + (a / x)) / 2;
        } while (abs(y - x) > e);
        printf("%.4f", x);
    }
    else
        std::cout << "Number is negative or equal 0";
}
