// A - GOOGLE IS FEELING LUCKY || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int aux;

    cin >> aux;

    for (int i = 1; i <= aux; i++) {
        vector<int> R(10);
        vector<int> RO(10);
        vector<string> S(10);

        for (int j = 0; j < 10; j++) {
            cin >> S[j] >> R[j];
        }

        copy(R.begin(), R.end(), RO.begin());
        sort(RO.begin(), RO.end(), greater<int>());

        cout << "Case #" << i << ":" << endl;

        for (int j = 0; j < 10; j++) {
            if (R[j] == RO[0]) {
                cout << S[j] << endl;
            }
        }
    }
}