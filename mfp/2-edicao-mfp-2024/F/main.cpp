// F[MFP] - PONTUAÇÃO || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, aux = 0;

    cin >> N;

    for (int i = 0; N > 0; i++) {
        for (int j = 0; N >= 8; j++) {
            N = N - 8;
            aux++;
        }

        for (int j = 0; N >= 4; j++) {
            N = N - 4;
            aux++;
        }

        for (int j = 0; N >= 2; j++) {
            N = N - 2;
            aux++;
        }

        for (int j = 0; N >= 1; j++) {
            N = N - 1;
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}
