#include <iostream>

int main()
{
    int out = 0;
    int cur;
    do {
        std::cin >> cur;
        out += cur;
    } while (cur != 0);
    std::cout << out;
}
