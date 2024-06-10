// 1448 - TELEFONE SEM FIO | RESOLVIDO EM C++
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
#define SPEED                     \
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
    SPEED;

    string frase_original, time1, time2;
    int n_casos;

    cin >> n_casos;

    cin.ignore();

    for (int i = 1; i <= n_casos; i++)
    {
        int aux_time1 = 0, aux_time2 = 0, aux = 0;

        getline(cin, frase_original);
        getline(cin, time1);
        getline(cin, time2);

        for (int j = 0; j < frase_original.size(); j++)
        {
            if (frase_original[j] == time1[j])
            {
                aux_time1++;
            }
            if (frase_original[j] == time2[j])
            {
                aux_time2++;
            }
        }

        cout << "Instancia " << i << endl;

        if (aux_time1 > aux_time2)
        {
            cout << "time 1" << endl;
        }
        else if (aux_time2 > aux_time1)
        {
            cout << "time 2" << endl;
        }
        else if (aux_time1 == aux_time2)
        {
            for (int i = 0; i < frase_original.size(); i++)
            {
                if (time1[i] == frase_original[i] && time2[i] == frase_original[i])
                {
                    aux = 0;
                }
                else if (time1[i] == frase_original[i])
                {
                    aux = 1;
                    break;
                }
                else if (time2[i] == frase_original[i])
                {
                    aux = 2;
                    break;
                }
                else
                {
                    aux = 0;
                }
            }
            if (aux == 0)
            {
                cout << "empate" << endl;
            }
            else if (aux == 1)
            {
                cout << "time 1" << endl;
            }
            else if (aux == 2)
            {
                cout << "time 2" << endl;
            }
        }

        cout << endl;
    }

    return 0;
}