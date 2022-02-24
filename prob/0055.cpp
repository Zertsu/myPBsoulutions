#include <iostream>

#define MAXVAL 1000001


int main()
{
    int min = MAXVAL;
    int cur;
    while (true)
    {
        std::cin >> cur;     
        if (cur == 0) {break;}
        if (cur < 0)  {continue;}
        if (cur < min)
        {
            min = cur;
        }
    }
    if (min == MAXVAL)
    {
        std::cout << "NU EXISTA\n";
    }
    else
    {
        std::cout << min;
    }
}
