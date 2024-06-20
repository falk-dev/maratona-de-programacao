/*
 *  Link da questão: https://codeforces.com/contest/149/problem/A
 *  149A - BUSINESS TRIP | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] - Sort
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

    int cm, aux = 0, qtd_meses = 0;
    vi tamanho(12);

    cin >> cm;

    for (int i = 0; i < 12; i++)
    {
        cin >> tamanho[i];
    }

    sort(tamanho.begin(), tamanho.end(), greater<int>());

    if (cm == 0) {
        cout << "0" << endl;
    }
    else {
        for (int i = 0; i < 12; i++) {
            qtd_meses++;
            aux += tamanho[i];

            if (aux >= cm) {
                break;
            }
        }

        if(aux >= cm) {
            cout << qtd_meses << endl;;
        }
        else {
            cout << "-1" << endl;
        }
    }

    return 0;
}