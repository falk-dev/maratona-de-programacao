// Link da questão: https://judge.beecrowd.com/pt/problems/view/1261
// 1261 - PONTOS DE FENO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n_palavras, n_descricoes, aux = 0;
    map<string, double> encontrar;

    cin >> n_palavras >> n_descricoes;
    cin.ignore();

    for (int i = 0; i < n_palavras; i++)
    {
        string palavra;
        double valor;

        cin >> palavra >> valor;
        encontrar[palavra] = valor;
    }

    while (n_descricoes > 0)
    {
        string palavra;

        cin >> palavra;

        if (palavra == ".")
        {
            cout << aux << endl;
            aux = 0;
            n_descricoes--;
            continue;
        }

        aux += encontrar[palavra];
    }

    return 0;
}