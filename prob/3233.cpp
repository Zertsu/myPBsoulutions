#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 0)
    {
        n--;
    }
    for (int i = n; i >= 0; i -= 2)
    {
        std::cout << i << ' ';
    }
}
