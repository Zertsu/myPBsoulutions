#include <iostream>


int main()
{
    int n,m,e,b;
    std::cin >> n;
    std::cin >> m;
    std::cin >> e;
    std::cin >> b;
    
    int ban = (e+b*m)/(m-n);
    int szem = ban * n + e;

    std::cout << szem << '\n';
    std::cout << ban << '\n';
}
