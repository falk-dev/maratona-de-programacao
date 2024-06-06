// Link da questão: https://judge.beecrowd.com/pt/problems/view/1281
// 1281 - IDA À FEIRA | RESOLVIDO EM C++
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

    int n_casos;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        int qtd_produtos, itens_comprar, qtd_produtos_wish;
        string item, produto_wish;
        double valor, aux = 0;
        map<string, double> produtos;

        cin >> qtd_produtos;

        for (int j = 0; j < qtd_produtos; j++)
        {
            cin >> item >> valor;
            produtos[item] = valor;
        }

        cin >> itens_comprar;

        for (int j = 0; j < itens_comprar; j++)
        {
            cin >> produto_wish >> qtd_produtos_wish;

            aux = aux + (produtos[produto_wish] * qtd_produtos_wish);
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << aux << endl;
    }

    return 0;
}