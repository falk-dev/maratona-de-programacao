// 1235 - DE DENTRO PARA FORA | RESOLVIDO EM C++
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
    int n_casos;

    cin >> n_casos;
    cin.ignore();

    for (int i = 0; i < n_casos; i++)
    {
        string mensagem, string1, string2;
        int metade;

        getline(cin, mensagem);

        metade = mensagem.size() / 2;

        for (int j = 0; j < metade; j++)
        {
            string1 = string1 + mensagem[j];
        }

        for (int j = metade; j < mensagem.size(); j++)
        {
            string2 = string2 + mensagem[j];
        }

        reverse(string1.begin(), string1.end());
        reverse(string2.begin(), string2.end());

        cout << string1 << string2 << endl;
    }

    return 0;
}