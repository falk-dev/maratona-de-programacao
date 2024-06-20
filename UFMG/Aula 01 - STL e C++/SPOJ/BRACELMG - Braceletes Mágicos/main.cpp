/*
 *  Link da questão: https://br.spoj.com/problems/BRACELMG/
 *  BRACELMG - BRACELETES MÁGICOS | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] sort
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

int main()
{
    SPEED;

    int n_casos;

    cin >> n_casos;

    while (n_casos--)
    {
        string codigo;
        string codigo_proibido;

        cin >> codigo_proibido;
        cin >> codigo;

        codigo += codigo;

        string r_texto = codigo;
        reverse(r_texto.begin(), r_texto.end());

        auto texto_r = r_texto.find(codigo_proibido);
        auto texto = codigo.find(codigo_proibido);

        if (texto != string::npos || texto_r != string::npos) {
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }

    return 0;
}