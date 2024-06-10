// 2880 - ENIGMA | RESOLVIDO EM C++
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
#define speed                     \
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
    string enigma, crib;
    int aux = 0, possibilidades = 0;

    cin >> enigma;
    cin >> crib;

    for (int i = 0; i <= enigma.size() - crib.size(); i++)
    {
        for (int j = 0; j < crib.size(); j++)
        {
            if (enigma[i + j] != crib[j])
            {
                aux++;
            }
            else
            {
                break;
            }
        }

        if (aux == crib.size()) {
            possibilidades++;
        }

        aux = 0;
    }

    cout << possibilidades << endl;

    return 0;
}