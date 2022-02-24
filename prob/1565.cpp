#include <iostream>


int main()
{
    int a,b;
    std::cin >> a >> b;
    std::cout << a;
    for (int i = 0; i < b; i++)
    {
        std::cout << '0';
    }
}
