#include <iostream>


#define DEF_VAL -1000001

int main()
{
    int max = DEF_VAL;
    int cur;
    while (true)
    {
        std::cin >> cur;     
        if (cur == 0)
        {
            break;
        }
        if (cur > max)
        {
            max = cur;
        }
    }
    if (max == DEF_VAL)
    {
        std::cout << "NU EXISTA";
    }
    else
    {
        std::cout << max;
    }
}