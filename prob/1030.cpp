#include <iostream>

int main()
{
    int n;
    unsigned long long vals[] = {0, 0};
    int cur;
    std::cin >> n;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            std::cin >> cur;
            vals[i] += cur;
        }
    }
    std::cout << vals[0] * vals[1];
}
