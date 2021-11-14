#include <iostream>
#include <cmath>

int main()
{
    for (int i = 100; i < 1000; i++) {
        if (i == pow((i / 100), 3) + pow((i / 10 % 10), 3) + pow((i % 10), 3)) {
            std::cout << i << ' ';
        }
    }
}