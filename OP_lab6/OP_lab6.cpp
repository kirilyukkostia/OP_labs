#include <iostream>

bool isNumberPerfect(int num);

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isNumberPerfect(i))
            std::cout << i << std::endl;
    }

}

bool isNumberPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}