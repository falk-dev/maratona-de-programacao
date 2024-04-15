// B - CRUZAMENTO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 0, aux = 0;
    vector<int> X;

    cin >> N;

    X.resize(N);

    for (int i = 0; i < X.size(); i++) {
        cin >> X[i];
    }

    int i = 0, j = N;

    sort(X.begin(), X.end());

    while (i < j) {
        if (X[i] + X[j] / 2 > aux) {
            aux = (X[i] + X[j] / 2);
        }
        i++;
        j--;
    }

    cout << aux << endl;

    return 0;
}