// 1243 - O QUÃO FÁCIL É... | RESOLVIDO EM C++
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

    string problema;

    while (getline(cin, problema))
    {
        int aux = 0, frases = 0;

        for (int i = 0; i < problema.size(); i++)
        {
            if (isalpha(problema[i]))
            {
                aux++;
            }
        }

        for (int i = 0; i < problema.size(); i++)
        {
        }

        cout << aux << endl;
        cout << frases << endl;
        cout << "---------" << endl;
    }

    return 0;
}