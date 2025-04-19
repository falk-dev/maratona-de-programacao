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

    int n_casos;

    cin >> n_casos;

    while (n_casos--) {
        ll num_cadeiras, a, b, c, macaco_total = 0;

        cin >> num_cadeiras >> a >> b >> c;

        int fileira_a = num_cadeiras;
        int fileira_b = num_cadeiras;

        if ((fileira_a >= a) && fileira_a + fileira_b > 0) {
            macaco_total += a;
            fileira_a -= a;
        } else {
            macaco_total += fileira_a;
            fileira_a -= fileira_a;
        }

        if ((fileira_b >= b) && fileira_a + fileira_b > 0) {
            macaco_total += b;
            fileira_b -= b;
        } else {
            macaco_total += fileira_b;
            fileira_b -= fileira_b;
        }

        if ((fileira_a >= c) && fileira_a + fileira_b > 0) {
            fileira_a -= c;
            macaco_total += c;
            c -= c;
        } else {
            macaco_total += fileira_a;
            c -= fileira_a;
            fileira_a -= fileira_a;
        }

        if ((fileira_b >= c) && fileira_a + fileira_b > 0) {
            fileira_b -= c;
            macaco_total += c;
        } else {
            macaco_total += fileira_b;
            c -= fileira_b;
            fileira_b -= fileira_b;
        }

        cout << macaco_total << endl;
    }

    return 0;
}