// Link da questão: https://vjudge.net/contest/627204#problem/D
// D - LOG2(N) | RESOLVIDO EM C++
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

    int i = 0;
    ll N, t = 1;

    cin >> N;

    for (i = 0; i < 59; i++)
    {
        t = t * 2;

        if (t > N)
            break;
    }

    cout << i << endl;

    return 0;
}