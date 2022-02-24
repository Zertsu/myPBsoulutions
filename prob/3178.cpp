#include <iostream>


int main()
{
    int n[3];
    std::cin >> n[0];
    std::cin >> n[1];
    std::cin >> n[2];
    std::cout << (n[0] * 3 + n[1] * 2) * n[2];
}
