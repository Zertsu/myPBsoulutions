#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        std::cout << i << ' ';
    }
}
