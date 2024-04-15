// B - HORROR DASH || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, aux;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> aux;

        vector<int> X(aux);

        for (int j = 0; j < aux; j++) {
            cin >> X[j];
        }

        sort(X.begin(), X.end(), greater<int>());

        cout << "Case " << i << ": " << X[0] << endl;
    }
}