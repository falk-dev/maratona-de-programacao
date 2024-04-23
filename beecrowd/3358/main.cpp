// 3358 - SOBRENOME NÃO É FÁCIL | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n_testes;
    string sobrenome, aux;
    bool c = false;

    cin >> n_testes;

    for (int i = 0; i < n_testes; i++)
    {
        cin >> sobrenome;
        aux = sobrenome;
        aux[0] = tolower(sobrenome[0]);

        for (int j = 2; j < sobrenome.size(); j++)
        {

            if ((aux[j] != 'a' && aux[j] != 'e' && aux[j] != 'i' && aux[j] != 'o' && aux[j] != 'u') && (aux[j - 1] != 'a' && aux[j - 1] != 'e' && aux[j - 1] != 'i' && aux[j - 1] != 'o' && aux[j - 1] != 'u') && (aux[j - 2] != 'a' && aux[j - 2] != 'e' && aux[j - 2] != 'i' && aux[j - 2] != 'o' && aux[j - 2] != 'u'))
            {
                c = true;
                break;
            }
            else
            {
                c = false;
                continue;
            }
        }

        if (c == true)
        {
            cout << sobrenome << " nao eh facil" << endl;
        }
        else
        {
            cout << sobrenome << " eh facil" << endl;
        }
    }

    return 0;
}
