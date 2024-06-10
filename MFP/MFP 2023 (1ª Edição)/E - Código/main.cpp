// E - CÓDIGO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int C, aux = 0, CS;

    for (int i = 0; i < 8; i++) {
        cin >> C;

        if (i < 7) {
            if (C == 1) {
                aux++;
            }
        } else {
            CS = C;
        }
    }

    if ((aux % 2 == 0 && CS == 0) || (aux % 2 == 1 && CS == 1)) {
        cout << "N? " << endl;
    } else {
        cout << "S" << endl;
    }

    return 0;
}