// 2339 - AVIÕES DE PAPEL | RESOLVIDO EM C++ 

#include <iostream>

using namespace std;

int main()
{
    int C = 0;
    int P = 0;
    int F = 0;

    cin >> C >> P >> F;

    if (C * F <= P) {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return 0;
}