/*
 *  Link da questão:
 *  xxxx - xxxx | RESOLVIDO EM C++
 *  Author: falk.dev
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define dbmap(map)                                  \
    for (auto e : map)                              \
        cout << e.first << " " << e.second << endl; \
    cout << endl;

typedef long long ll;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;
typedef priority_queue<pii, vector<pii>, greater<pii>> pq_min;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int main() {
    SPEED;

    int casos;
    cin >> casos;

    while (casos--) {
        int n;
        cin >> n;

        vector<vi> vetor(n, vi(n));
        map<int, int> p;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> vetor[i][j];

                dbg(i + j + 2);
                p[i + j + 2] = vetor[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << vetor[i][j] << " ";
            }
            cout << endl;
        }

        dbmap(p);
    }

    return 0;
}