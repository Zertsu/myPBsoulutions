#include <iostream>


int main()
{
    std::string in;
    int out = 0;
    std::cin >> in;
    for (int i = 0; i < in.length(); i++)
    {
        out += std::stoi(in.substr(i,1));
    }
    std::cout << out;
}
