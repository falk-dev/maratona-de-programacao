// 1172 - SUBSTITUIÇÃO EM VETOR I | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> X(10);
    int aux = 0;

    for (int i = 0; i < X.size(); i++)
    {
        cin >> aux;

        if (aux < 1)
        {
            X[i] = 1;
        }
        else
        {
            X[i] = aux;
        }
    }

    for (int i = 0; i < X.size(); i++)
    {
        cout << "X[" << i << "] = " << X[i] << endl;
    }

    return 0;
}