#include <iostream>

#define MAXVAL 1000001


int main()
{
    int n = 0;
    int cur = 0;
    int max = 0;
    int maxoccur = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> cur;
        if (cur < max)  {continue;}
        if (cur == max) {maxoccur++; continue;}
        maxoccur = 1;
        max = cur;
    }
    std::cout << max << " " << maxoccur << "\n";
}
