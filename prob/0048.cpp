#include <iostream>

int main()
{
    int out = 0;
    int tar = 0;
    int cursqr = 0;
    int curi = 0;
    std::cin >> tar;
    while (true)
    {
        curi++;
        cursqr = curi * curi;
        if (cursqr > tar)
        {
            break;
        }
        out += cursqr;
    }
    std::cout << "Rezultatul este " << out;
}
