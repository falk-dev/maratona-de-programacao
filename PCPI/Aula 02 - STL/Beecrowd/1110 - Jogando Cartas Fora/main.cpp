/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/1110
1110 - JOGANDO CARTAS FORA | RESOLVIDO EM C++
Author: falk.dev
Complexidade: O(n)
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

int main() {
    int n_cartas;

    while (cin >> n_cartas, n_cartas) {
        deque<int> cartas(n_cartas);
        queue<int> cartas_descartadas;

        iota(cartas.begin(), cartas.end(), 1);

        for (size_t i = 0; i < n_cartas; i++) {
            if (n_cartas - i >= 2) {
                cartas_descartadas.push(cartas[0]);
                cartas.pop_front();
                cartas.push_back(cartas[0]);
                cartas.pop_front();
            } else {
                break;
            }
        }

        cout << "Discarded cards: ";

        while (!cartas_descartadas.empty()) {
            cout << cartas_descartadas.front();
            if (cartas_descartadas.size() > 1) {
                cout << ", ";
            }
            cartas_descartadas.pop();
        }
        cout << endl;
        cout << "Remaining card: " << cartas[0] << endl;
    }

    return 0;
}