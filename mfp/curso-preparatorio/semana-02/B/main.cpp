/*
Link da questão: https://vjudge.net/contest/627742#problem/B
B - DISTINCT NUMBER | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O(n log n)
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
    set<int> numbers;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        cin >> aux;

        numbers.insert(aux);
    }

    cout << numbers.size() << endl;

    return 0;
}