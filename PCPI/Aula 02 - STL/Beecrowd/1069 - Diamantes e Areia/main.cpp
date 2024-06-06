// Link da questão: https://judge.beecrowd.com/pt/problems/view/1069
// 1069 - DIAMANTES E AREIA | RESOLVIDO EM C++
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

int main() {
    SPEED;

    int n_casos;
    string palavra;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++) {
        stack<char> sequencia;
        int aux = 0;

        cin >> palavra;

        for (int j = 0; j < palavra.size(); j++) {
            if (palavra[j] == '<') {
                sequencia.push(palavra[j]);
            }
            if (!sequencia.empty()) {
                if (palavra[j] == '>') {
                    if (sequencia.top() == '<') {
                        aux++;
                        sequencia.pop();
                    }
                }
            }
        }
        cout << aux << endl;
    }

    return 0;
}