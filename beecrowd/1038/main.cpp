// 1038 - LANCHE | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C = 0;
    int P = 0;
    float aux = 0;

    cin >> C >> P;

    if (C == 1) {
        aux = 4 * P;
    }

    if (C == 2) {
        aux = 4.5 * P;
    }

    if (C == 3) {
        aux = 5 * P;
    }

    if (C == 4) {
        aux = 2 * P;
    }

    if (C == 5) {
        aux = 1.5 * P;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << aux << endl;

    return 0;
}