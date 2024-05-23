/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2396
2396 - CORRIDA | RESOLVIDO EM C++
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

    int n_carros, n_voltas, velocidade;

    cin >> n_carros >> n_voltas;

    vector<pair<int, int>> carros;

    for (int i = 0; i < n_carros; i++)
    {
        int aux = 0;

        for (int j = 0; j < n_voltas; j++)
        {
            cin >> velocidade;

            aux += velocidade;
        }

        carros.push_back(make_pair(aux, i + 1));
    }

    sort(carros.begin(), carros.end());

    for (int i = 0; i < 3; i++)
    {
        cout << carros[i].second << endl;
    }

    return 0;
}