#include <iostream>

int main()
{
    int in;
    std::cin >> in;
    if (in % 2 == 0)
    {
        std::cout << in << " este par";
    }
    else
    {
        std::cout << in << " este impar";
    }
}
