#include <iostream>

int main()
{
    int n, cur;
    int even = 0;
    int odd = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> cur;
        if (cur == 0)
        {
            even++;
            continue;
        }
        while (cur != 0)
        {
            if (cur % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            cur /= 10;
        }
    }
    std::cout << even << " " << odd << "\n";
}
