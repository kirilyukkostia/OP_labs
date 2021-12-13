#include <iostream>
#include <cstring>
#include "funcs.cpp"

int main()
{
    char str[100];

    puts("Enter string (max 100 chars):");
    gets_s(str);

    int* chars = count_chars(str);

    for (int i = 0; i < 255; i++)
        if (chars[i] != 0) {
            std::cout << "Char : '" << (char)i << "' Count : " << chars[i] << "\n";
        }
}