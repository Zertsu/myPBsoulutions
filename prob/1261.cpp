#include <iostream>

int main()
{
    int npar = 0;
    int cur;
    while (true)
    {
        std::cin >> cur;
        if (cur == 0)
        {
            break;
        }
        else if (cur % 2 == 0)
        {
            npar++;
        }
    }
    if (npar == 0)
    {
        std::cout << "NU EXISTA";
    } 
    else
    {
        std::cout << npar;
    }
}
