// 2720 - PRESENTES GRANDES | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

struct Presente {
    int I;
    int V;
};

bool maiorV(Presente v1, Presente v2) {
    if (v1.V != v2.V) {
        return v1.V > v2.V;
    }

    return v1.I < v2.I;
}

int main() {
    int T, N, K, H, W, L;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> K;
        vector<Presente> dp(N);

        vector<int> X(K);

        for (int j = 0; j < N; j++) {
            cin >> dp[j].I >> H >> W >> L;
            dp[j].V = H * W * L;
        }

        sort(dp.begin(), dp.end(), maiorV);

        for (int j = 0; j < K; j++) {
            X[j] = dp[j].I;
        }

        sort(X.begin(), X.end());

        for (int j = 0; j < K; j++) {
            cout << X[j];
            if (j < K - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}