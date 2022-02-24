#include <iostream>

int main()
{
    int n = 0;
    int cur = 0;
    int out = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> cur;
        out += cur;   
    }
    std::cout << out;
}
