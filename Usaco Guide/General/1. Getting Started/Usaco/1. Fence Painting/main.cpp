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

int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    SPEED;

    vector<int> pinturas(101);
    int fazendeiro_inicio, fazendeiro_final, vaca_inicio, vaca_final, aux = 0;

    cin >> fazendeiro_inicio >> fazendeiro_final;

    cin >> vaca_inicio >> vaca_final;

    for (int i = fazendeiro_inicio; i < fazendeiro_final; i++) {
        pinturas[i]++;
    }

    for (int i = vaca_inicio; i < vaca_final; i++) {
        pinturas[i]++;
    }

    for (int i = 0; i < pinturas.size(); i++) {
        if (pinturas[i] >= 1) {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}