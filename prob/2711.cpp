#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    if (n == 0)
    {
        std::cout << '1';
    }
    else
    {
        std::cout << (2 << (n - 1));
    }    
}
