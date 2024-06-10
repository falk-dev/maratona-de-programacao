// 1114 - SENHA FIXA | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int senha = 2002;
    int T = 0;

    while (T != senha)
    {
        cin >> T;

        if (T != senha)
        {
            cout << "Senha Invalida" << endl;
        }
    }

    cout << "Acesso Permitido" << endl;

    return 0;
}