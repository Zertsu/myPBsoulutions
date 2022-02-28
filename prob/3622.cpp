#include <iostream>


unsigned long long my2pow(unsigned long long a) {
    return a * a;
}

int main()
{
    int l,r;
    std::cin >> l >> r;
    if (l % 2 == 1) {l++;}
    if (r % 2 == 1) {r--;} 
    unsigned long long out = my2pow(((r - l) / 2) + 1);
    std::cout << out;
}
