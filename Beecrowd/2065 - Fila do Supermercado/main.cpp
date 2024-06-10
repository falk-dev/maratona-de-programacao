/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2065
2065 - FILA DO SUPERMERCADO | RESOLVIDO EM C++
Author: falk.dev
Complexidade: 
*/

#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;

#define f first;
#define s second;

int main()
{
    SPEED;

    int n_funcionarios, n_clientes;
    vector<int>velocidade_funcionarios;
    vector<int>qtd_itens_cliente;

    cin >> n_funcionarios >> n_clientes;

    for (int i = 0; i < n_funcionarios; i++) {
        cin >> n_funcionarios[i];
    }

    for (int i = 0; i < n_clientes; i++) {
        cin >> qtd_itens_cliente[i];
    }

    return 0;
}