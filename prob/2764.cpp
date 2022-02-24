#include <iostream>

using namespace std;

int main()
{
    int R;
    int G;
    int B;
    cin >> R;
    cin >> G;
    cin >> B;
    cout << 255-R << ' ' << 255-G << ' ' << 255-B;
}
