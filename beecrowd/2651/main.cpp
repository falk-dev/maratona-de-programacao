// 2651 - LINK BOLADO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome = "zelda", apelido;

    cin >> apelido;

    for (int j = 0; j < apelido.size(); j++)
    {
        apelido[j] = tolower(apelido[j]);
    }

    if (apelido.find(nome))
    {
        cout << "achou" << endl;
    }
    else
    {
        cout << "nao achou" << endl;
    }

    return 0;
}