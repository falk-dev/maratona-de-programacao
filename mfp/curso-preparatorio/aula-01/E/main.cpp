// Link da questão: https://vjudge.net/contest/627204#problem/E
// E - MINIMIZE ORDERING | RESOLVIDO EM C++
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

    string a;

    cin >> a;

    sort(a.begin(), a.end());

    cout << a << endl;

    return 0;
}