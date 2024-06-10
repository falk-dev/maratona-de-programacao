// 2728 - GRACE HOPPER, A VOVÓ DO COBOL | RESOLVIDO EM C++
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
    string linguagem = "cobol", frase, delimitador = "-";
    vector<int> posicoes;
    int pini, pfin;

    while (cin >> frase)
    {
        string aux;
        size_t pos = frase.find(delimitador);

        while (pos != string::npos)
        {
            posicoes.push_back(pos);
            pos = frase.find(delimitador, pos + 1);
        }

        for (int i = 0; i < frase.size(); i++)
        {
            frase[i] = tolower(frase[i]);
        }

        // C
        pini = 0;
        pfin = (posicoes[0]) - 1;
        if (frase[pini] == 'c')
        {
            aux = aux + frase[0];
        }
        else if (frase[pfin] == 'c')
        {
            aux = aux + frase[pfin];
        }

        // O
        pini = (posicoes[0]) + 1;
        pfin = (posicoes[1]) - 1;
        if (frase[pini] == 'o')
        {
            aux = aux + frase[pini];
        }
        else if (frase[pfin] == 'o')
        {
            aux = aux + frase[pfin];
        }

        // B
        pini = (posicoes[1]) + 1;
        pfin = (posicoes[2]) - 1;
        if (frase[pini] == 'b')
        {
            aux = aux + frase[pini];
        }
        else if (frase[pfin] == 'b')
        {
            aux = aux + frase[pfin];
        }

        // O
        pini = (posicoes[2]) + 1;
        pfin = (posicoes[3]) - 1;
        if (frase[pini] == 'o')
        {
            aux = aux + frase[pini];
        }
        else if (frase[pfin] == 'o')
        {
            aux = aux + frase[pfin];
        }

        // L
        pini = (posicoes[3]) + 1;
        pfin = (frase.size()) - 1;

        if (frase[pini] == 'l')
        {
            aux = aux + frase[pini];
        }
        else if (frase[pfin] == 'l')
        {
            aux = aux + frase[pfin];
        }

        if (aux == "cobol")
        {
            cout << "GRACE HOPPER" << endl;
        }
        else
        {
            cout << "BUG" << endl;
        }

        posicoes.clear();
    }

    return 0;
}