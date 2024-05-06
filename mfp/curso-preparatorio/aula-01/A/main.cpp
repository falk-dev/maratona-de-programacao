// Link da questão: https://vjudge.net/contest/627204#problem/A
// A - STAIR, PEAK, OR NEITHER? | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

// Printar vector
#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

// Fast IO
#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

// Função de Debbug
#define dbg(x) cout << #x << " = " << x << endl;

// Nome alternativo para long long
typedef long long ll;

// Pair
#define f first;
#define s second;

int main()
{
    SPEED;

    int n_casos;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR" << endl;
        else if (a < b && b > c)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }

    return 0;
}