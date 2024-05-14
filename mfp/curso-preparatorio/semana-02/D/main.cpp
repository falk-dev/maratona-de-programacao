/*
Link da questão: https://vjudge.net/contest/627742#problem/D
D - MISSING NUMBER | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O(n)
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

    int n_casos, aux;

    cin >> n_casos;

    vector<int> numeros(n_casos + 1);

    for (int i = 1; i <= n_casos; i++)
    {
        cin >> aux;
        numeros[aux]++;
    }

    for (int i = 1; i <= n_casos; i++)
    {
        if (numeros[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}