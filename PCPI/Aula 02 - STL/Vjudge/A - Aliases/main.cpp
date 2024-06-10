// Link da questão: https://vjudge.net/contest/622702#problem/A
// A - ALIASES | RESOLVIDO EM C++
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

    int n_casos, aux = 0;
    map<string, int> frequencia;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        int n_nomes;
        string nome, apelido;

        cin >> n_nomes;

        for (int j = 0; j < n_nomes; j++)
        {
            cin >> nome;

            apelido = apelido + nome[0];
        }

        frequencia[apelido]++;
    }

    for (auto i : frequencia)
    {
        if (i.second == 1)
        {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}