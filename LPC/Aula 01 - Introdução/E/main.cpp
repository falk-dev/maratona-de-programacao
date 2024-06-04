// E - CARDS || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    int N;

    cin >> N;

    cin.ignore();

    getline(cin, S);

    for (int i = 0; i < N; i++) {
        if (S[i] == 'n') {
            cout << "1 ";
        }
    }

    for (int i = 0; i < N; i++) {
        if (S[i] == 'z') {
            cout << "0 ";
        }
    }

    return 0;
}