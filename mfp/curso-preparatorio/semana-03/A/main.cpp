/*
Link da questão: https://vjudge.net/contest/629594#problem/A
A - STATIC RANGE SUM QUERIES | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O(N)
*/


#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;

#define f first;
#define s second;

int main()
{
    SPEED;

    ll n_valores, n_casos, a, b;

    cin >> n_valores >> n_casos;

    vector<ll> valores(n_valores + 1);
    vector<ll> prefix(n_valores + 1);

    prefix[0] = 0;

    for (ll i = 1; i <= n_valores; i++) cin >> valores[i];

    for (ll i = 1; i <= n_valores; i++) prefix[i] = prefix[i - 1] + valores[i];

    while(n_casos--) {
        cin >> a >> b;

        cout << prefix[b] - prefix[a - 1] << endl;
    }

    return 0;
}