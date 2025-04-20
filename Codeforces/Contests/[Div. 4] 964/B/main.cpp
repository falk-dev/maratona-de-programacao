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
        int a1, a2, b1, b2, maior = 0, vence = 0;

        cin >> a1 >> a2 >> b1 >> b2;

        if (a1 > b1 && a2 > b2) {
            vence++;
        }
        if (a1 > b2 && a2 > b1) {
            vence++;
        }
        if (a2 > b1 && a1 > b2) {
            vence++;
        }
        if (a2 > b2 && a1 > b1) {
            vence++;
        }
        if ((a1 > b1 && a2 == b2) || (a1 == b1 && a2 > b2)) {
            vence++;
        }
        if ((a1 > b2 && a2 == b1) || (a1 == b2 && a2 > b1)) {
            vence++;
        }
        if ((a2 > b1 && a1 == b2) || (a2 == b1 && a1 > b2)) {
            vence++;
        }
        if ((a2 > b2 && a1 == b1) || (a2 == b2 && a1 > b1)) {
            vence++;
        }

        cout << vence << endl;
    }

    return 0;
}