// 2651 - LINK BOLADO | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome = "zelda", apelido;

    cin >> apelido;

    for (int i = 0; i < apelido.size(); i++)
    {
        apelido[i] = tolower(apelido[i]);
    }

    size_t posicao = apelido.find(nome);

    if (posicao != string::npos)
    {
        cout << "Link Bolado" << endl;
    }
    else
    {
        cout << "Link Tranquilo" << endl;
    }

    return 0;
}