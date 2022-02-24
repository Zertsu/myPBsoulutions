#include <iostream>

int main()
{
    std::string in;
    int out = 1;
    bool seen = false;
    std::cin >> in;
    for (unsigned int i = 0; i < in.length(); i++)
    {
        int cur = std::stoi(in.substr(i, 1));
        if (cur % 2 == 1)
        {
            seen = true;
            out *= cur;
        }
    }
    if (seen)
    {
        std::cout << out;
    }
    else
    {
        std::cout << -1;
    }
}
