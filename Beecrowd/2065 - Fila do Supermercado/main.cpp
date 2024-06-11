/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2065
2065 - FILA DO SUPERMERCADO | RESOLVIDO EM C++
Author: falk.dev
Complexidade: 
*/

#include <bits/stdc++.h>

using namespace std;

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define dbmap(map)                      \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl;

typedef long long ll;

typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;
typedef priority_queue<pii, vector<pii>, greater<pii>> pq_min;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int main()
{
    SPEED;

    int n_funcionarios, n_clientes, velocidade, cliente_atual, funcionario_atual;
    map<int, int>velocidade_funcionarios;
    pq_min atendimento;
    pii func_top; 

    cin >> n_funcionarios >> n_clientes;
    
    vi qtd_itens_cliente(n_clientes);

    for (int i = 1; i <= n_funcionarios; i++) {
        cin >> velocidade;
        velocidade_funcionarios.insert({i, velocidade});
        atendimento.push(make_pair(0, i));
    }

    for (int i = 0; i < n_clientes; i++) {
        cin >> qtd_itens_cliente[i];
    }

    for (int i = 0; i < n_clientes; i++) {
        cliente_atual = qtd_itens_cliente[i];
        func_top = atendimento.top();
        funcionario_atual = func_top.second;
        atendimento.pop();
        atendimento.push(make_pair(func_top.first += cliente_atual * velocidade_funcionarios[func_top.second], funcionario_atual));
    }

    while (atendimento.size() > 1) {
        atendimento.pop();
    }

    func_top = atendimento.top();

    cout << func_top.first << endl;

    return 0;
}