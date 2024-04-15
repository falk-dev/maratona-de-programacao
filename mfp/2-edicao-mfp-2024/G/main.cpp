// G[MFP] - JOGO DE BASQUETE || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p1 = 0, p2 = 0, pont = 0;
    string aux;

    cin >> n;

    for (int i = 0; i <= n; i++) {
        getline(cin, aux);

        if (aux[8] == '1') {
            pont = 1;
        }

        if (aux[8] == '2') {
            pont = 2;
        }

        if (aux[8] == '3') {
            pont = 3;
        }

        if (aux[5] == '1') {
            p1 = p1 + pont;
        }

        if (aux[5] == '2') {
            p2 = p2 + pont;
        }
    }

    cout << p1 << " x " << p2 << endl;

    return 0;
}
