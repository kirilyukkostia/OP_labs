#include <iostream>

long int* enter_array(int n);
void print_array(int n, long int* arr);
long int find_max(int n, long int* arr);
void replace_mod_p_equals_q(int n, long int* arr, int p, int q, int num);

int main()
{
    int n, p, q;
    std::cout << "Enter p: ";
    std::cin >> p;
    std::cout << "Enter q: ";
    std::cin >> q;
    std::cout << "Enter n: ";
    std::cin >> n;

    long int* arr = enter_array(n);

    replace_mod_p_equals_q(n, arr, p, q, pow(find_max(n, arr), 2));

    print_array(n, arr);
}

long int* enter_array(int n) {
    long int* arr = new long int[n];

    std::cout << "Enter " << n << " numbers:" << std::endl;
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    return arr;
}

void print_array(int n, long int* arr) {
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';
}

long int find_max(int n, long int* arr) {
    int max_num = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max_num)
            max_num = arr[i];
    }

    return max_num;
}


void replace_mod_p_equals_q(int n, long int* arr, int p, int q, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % p == q)
            arr[i] = num;
    }
}