#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << i + 1 << ' ';
    }
    std::cout << '\n';
    for (int i = 0; i < n; i++)
    {
        std::cout << n - i << ' ';
    }
}
