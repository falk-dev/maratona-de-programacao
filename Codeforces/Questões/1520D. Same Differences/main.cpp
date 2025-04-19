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

#define dbmap(map)                          \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
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
        int qtd_el;
        ll aux = 0;
        cin >> qtd_el;
        vi elementos(qtd_el);
        map<int, int> ocorrencias;

        for (int i = 0; i < qtd_el; i++) {
            cin >> elementos[i];
        }

        for (int i = 0; i < qtd_el; i++) {
            aux += ocorrencias[elementos[i] - i];
            ocorrencias[elementos[i] - i]++;
        }

        cout << aux << endl;
    }

    return 0;
}