#include <iostream>


int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        std::cin >> n[i];
    }
    std::cout << ((n[0] * n[2] + n[1] * n[3]) * n[4]);
}
