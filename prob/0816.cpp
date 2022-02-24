#include <iostream>

int main()
{
    int x,y, out;
    std::cin >> x >> y;
    out = y / x;
    if (y % x) { out++; }
    std::cout << out;
}
