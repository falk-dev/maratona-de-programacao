// 2006 - IDENTIFICANDO O CHÁ | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, P, aux = 0;

    cin >> T;

    for (int i = 0; i < 5; i++) {
        cin >> P;

        if (P == T) {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}