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

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int bronze_antes, bronze_depois, prata_antes, prata_depois, ouro_antes, ouro_depois, platina_antes, platina_depois;

    cin >> bronze_antes >> bronze_depois;
    cin >> prata_antes >> prata_depois;
    cin >> ouro_antes >> ouro_depois;
    cin >> platina_antes >> platina_depois;

    int avanco_platina = platina_depois - platina_antes;
    int avanco_ouro = ouro_depois - ouro_antes + avanco_platina;
    int avanco_prata = prata_depois - prata_antes + ouro_depois - ouro_antes + avanco_platina;

    cout << avanco_prata << endl;
    cout << avanco_ouro << endl;
    cout << avanco_platina << endl;

    return 0;
}