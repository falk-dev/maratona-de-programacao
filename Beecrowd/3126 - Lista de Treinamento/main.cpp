// 3126 - LISTA DE TREINAMENTO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int C;
    int A = 0;
    int aux = 0;

    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> A;

        if (A == 1) {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}