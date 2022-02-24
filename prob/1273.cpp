#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cin >> A;
    cin >> B;
    string C=to_string(A+B);
    cout << C[C.length()-1];
    return 0;
}
