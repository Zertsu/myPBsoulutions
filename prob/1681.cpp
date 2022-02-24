#include <iostream>

int main()
{
    int a,b;
    int out = 1;
    std::cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        out *= a;
    }
    std::cout << out;
}
