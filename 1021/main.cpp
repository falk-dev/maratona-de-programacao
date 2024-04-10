// 1021 - NOTAS E MOEDAS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double N;
    int R;
    int aux;

    cin >> N;

    int N2 = N * 100;

    vector<int> notas{10000, 5000, 2000, 1000, 500, 200};
    vector<int> moedas{100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;

    for (int i = 0; i < notas.size(); i++)
    {
        aux = N2 / notas[i];
        R = N2 % notas[i];
        int NA = notas[i] / 100;
        cout << aux << " nota(s) de R$ " << NA << ".00" << endl;
        N2 = R;
    }
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < moedas.size(); i++)
    {
        aux = N2 / moedas[i];
        R = N2 % moedas[i];

        cout << aux << " moeda(s) de R$ ";

        if (moedas[i] == 100)
        {
            cout << "1.00" << endl;
        }
        if (moedas[i] == 50)
        {
            cout << "0.50" << endl;
        }
        if (moedas[i] == 25)
        {
            cout << "0.25" << endl;
        }

        if (moedas[i] == 10)
        {
            cout << "0.10" << endl;
        }

        if (moedas[i] == 5)
        {
            cout << "0.05" << endl;
        }

        if (moedas[i] == 1)
        {
            cout << "0.01" << endl;
        }

        N2 = R;
    }
}