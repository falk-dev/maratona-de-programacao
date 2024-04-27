// 2087 - CONJUNTOS BONS E RUINS | RESOLVIDO EM C++
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

    while (cin >> n_casos, n_casos)
    {
        for (int i = 0; i < n_casos, i++)
        {
            vector<string> conjunto(n_casos);

            for (int j = 0; j < conjunto.size(); j++)
            {
                cin >> conjunto[j];
            }

            for (int j = 0; j < conjunto.size(); j++)
            {
                
            }
        }
    }

    return 0;
}