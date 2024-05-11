// Link da questão: https://judge.beecrowd.com/pt/problems/view/2929
// 2929 - MENOR DA PILHA | RESOLVIDO EM C++
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

    int n_operacoes;
    ll menos_divertido = INT_MAX;

    cin >> n_operacoes;
    cin.ignore();
    stack<int> presentes;

    for (int i = 0; i < n_operacoes; i++)
    {
        string tipo_op;
        int nivel_diversao;

        cin >> tipo_op;

        if (tipo_op == "PUSH")
        {
            cout << "primeiro caso" << endl;
            cin >> nivel_diversao;
            presentes.push(nivel_diversao);
            dbg(nivel_diversao);

            if (nivel_diversao < menos_divertido)
                menos_divertido = nivel_diversao;

            dbg(tipo_op);
        }

        else if (tipo_op == "MIN")
        {
            cout << "segundo caso" << endl;
            if (presentes.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
                cout << menos_divertido << endl;
            dbg(tipo_op);
        }

        else if (tipo_op == "POP")
        {
            cout << "terceiro caso" << endl;
            if (presentes.top() == menos_divertido)
            {

            }
            
            if (presentes.empty())
            {
                cout << "EMPTY" << endl;
            }
            else
                presentes.pop();
            dbg(tipo_op);
        }

        cout << endl
             << endl;
    }

    return 0;
}