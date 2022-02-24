#include <iostream>

int main()
{
    int in;
    std::cin >> in;
    std::cout << '1';
    for (int i = 0; i < in; i++)
    {
        std::cout << '0';
    }
}
