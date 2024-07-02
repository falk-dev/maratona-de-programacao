/*
 *  Link da questão: https://codeforces.com/problemset/problem/1760/C
 *  1760C - ADVANTAGES | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] sort, vector
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
        int tam_array;
        cin >> tam_array;

        vi forcas(tam_array);
        vi forcas_order(tam_array);

        for (int i = 0; i < tam_array; i++) {
            cin >> forcas[i];
            forcas_order[i] = forcas[i];
        }

        sort(forcas_order.begin(), forcas_order.end(), greater<int>());

        for (int i = 0; i < tam_array; i++) {
            int dif = 0;

            if (forcas[i] == forcas_order[0]) {
                dif = forcas[i] - forcas_order[1];
                cout << dif << " ";
            }
            else {
                dif = forcas[i] - forcas_order[0];
                cout << dif << " ";
            }
        }
        cout << endl;

    }

    return 0;
}