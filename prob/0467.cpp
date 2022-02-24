#include <iostream>


int main()
{
    std::string in;
    std::cin >> in;
    std::cout << std::stoi(in.substr(0,1)) * std::stoi(in.substr(2,1)) << '\n';
}
