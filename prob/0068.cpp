#include <iostream>

int main()
{
    std::string in;
    int out = 0;
    std::cin >> in;
    for (unsigned int i = 0; i < in.length(); i++)
    {
        int cur = std::stoi(in.substr(i, 1));
        if (cur > out)
        {
            out = cur;
        }
    }
    std::cout << out;
}
