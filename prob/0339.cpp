#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    int out = -1;
    int in;
    for (int i = 0; i < n; i++)
    {
        std::cin >> in;
        if (in % 2 == 0 && out == -1)
        {
            out = in;
        }
    }
    if (out == -1)
    {
        std::cout << "IMPOSIBIL";
    } else {
        std::cout << out;
    }
}
