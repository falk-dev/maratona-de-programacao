/*
 *  Link da questão: https://codeforces.com/problemset/problem/1714/B
 *  1714B - REMOVE PREFIX | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL]
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
    SPEED;

    int n_casos;
    cin >> n_casos;

    while (n_casos--)
    {
        int tam;
        cin >> tam;

        vi valores(tam);
        set<int> v;

        for (int i = 0; i < tam; i++)
        {
            cin >> valores[i];
        }

        for (int i = tam - 1; i >= 0; i--)
        {
            if (v.find(valores[i]) != v.end())
            {
                break;
            }
            else
            {
                v.insert(valores[i]);
            }
        }

        int dif = valores.size() - v.size();

        cout << dif << endl;
    }

    return 0;
}