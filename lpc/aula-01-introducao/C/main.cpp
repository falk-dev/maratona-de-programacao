// C - BEAT THE SPREAD! || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, d, x1 = 0, x2 = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> d;

        if (s < d) {
            cout << "impossible" << endl;
        } else {
            x1 + x2 = s;
            x2 = s - x1;
            x1*(s - x1) = s;
        }
    }

    return 0;
}