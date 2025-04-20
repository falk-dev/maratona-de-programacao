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
typedef vector<string> vs;
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
        ll tam_pulo, x, y, qtd = 0, i = 0, aux_x = 0, aux_y = 0;
        bool resp = false;

        cin >> x >> y >> tam_pulo;

        while (!resp) {
            if (aux_x == x && aux_y == y) {
                resp = true;
                break;
            }

            if (i % 2 == 0) {
                if (aux_x + tam_pulo <= x) {
                    aux_x += tam_pulo;
                    qtd++;
                } else {
                    aux_x = x;
                    qtd++;
                }
            }

            if (i % 2 == 1) {
                if (aux_y + tam_pulo <= y) {
                    aux_y += tam_pulo;
                    qtd++;
                } else {
                    aux_y = y;
                    qtd++;
                }
            }

            if (aux_x == x && aux_y == y) {
                resp = true;
                break;
            }

            i++;
        }
        cout << qtd << endl;
    }

    return 0;
}