// 2791 - FEIJÃO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> F(5);

    for (int i = 1; i < F.size(); i++) {
        cin >> F[i];
        if (F[i] == 1) {
            cout << i << endl;
        }
    }

    return 0;
}