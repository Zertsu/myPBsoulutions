#include <iostream>

int main()
{
    int n = 0;
    int cur = 0;
    int last = 0;
    bool found = false;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> cur;
        if (cur % 2 == 0)
        {
            last = cur;
            found = true;
        }   
    }
    if (found)
    {
        std::cout << last;
    }
    else
    {
        std::cout << "IMPOSIBIL";
    }
}
