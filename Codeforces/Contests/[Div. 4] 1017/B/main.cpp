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

    int casos, qtd_dias, pode_estar_infectado_dia, l, r;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> qtd_dias >> pode_estar_infectado_dia >> l >> r;

        int aux_l = 0, aux_r = 0;

        for (int j = 0; j < pode_estar_infectado_dia; j++) {
            if (j % 2 == 0) {
                if ((aux_r + 1) <= r) {
                    aux_r++;
                } else {
                    aux_l--;
                }
            } else {
                if ((aux_l - 1) >= l) {
                    aux_l--;
                } else {
                    aux_r++;
                }
            }
        }

        cout << aux_l << " " << aux_r << endl;
    }

    return 0;
}