// 1177 - PREENCHIMENTO DE VETOR II | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int aux = 0;
    vector<int> X(1000);

    cin >> T;

    for (int i = 0; i < X.size(); i++)
    {
        if (aux == T)
        {
            aux = 0;
            X[i] = aux;
        }
        else
        {
            X[i] = aux;
        }
        aux++;
    }

    for (int i = 0; i < X.size(); i++)
    {

        cout << "N[" << i << "] = " << X[i] << endl;
    }

    return 0;
}