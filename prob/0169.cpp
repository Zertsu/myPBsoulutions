#include <iostream>


int main()
{
    std::string in;
    std::cin >> in;
    int out =   std::stoi(in.substr(0,1)) + 
                std::stoi(in.substr(1,1)) + 
                std::stoi(in.substr(2,1));
    std::cout <<  out << '\n';
}
