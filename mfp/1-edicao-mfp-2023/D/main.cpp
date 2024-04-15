// D - CONSTANTE MÍSTICA DO UNIVERSO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    double F, G, M1, M2, X1, X2;

    cin >> M1 >> M2;
    cin >> X1 >> X2;
    cin >> F;

    G = (F * pow(abs(X1 - X2), 2)) / (M1 * M2);

    cout << fixed << setprecision(6);
    cout << G << endl;

    return 0;
}