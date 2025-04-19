#include <bits/stdc++.h>

#define dbg(x) cout << #x << " = " << x << endl;
typedef long long ll;
#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

using namespace std;

int main() {
    int num_casos;

    cin >> num_casos;

    while (num_casos--) {
        bool aux = false;
        ll n, m;

        cin >> n >> m;

        vector<ll> vetorA(n);
        vector<ll> vetorB(m);

        for (ll i = 0; i < n; i++) {
            cin >> vetorA[i];
        }

        for (ll i = 0; i < m; i++) {
            cin >> vetorB[i];
        }

        for (ll i = 0; i < n; i++) {
            int dif = vetorB[0] - vetorA[i];

            if (i != 0) {
                if (vetorA[i] >= vetorA[i - 1] && vetorA[i] <= vetorA[i + i]) {
                    if (dif >= vetorA[i - 1] && dif <= vetorA[i + i]) {
                        vetorA[i] = dif;
                        aux = true;
                    }
                } else {
                    aux = false;
                    break;
                }
            } else {
                if (vetorA[i] <= vetorA[i + i]) {
                    if (dif <= vetorA[i + i]) {
                        vetorA[i] = dif;
                        aux = true;
                    }
                }
            }
        }

        if (aux) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        dbvector(vetorA);
    }

    return 0;
}