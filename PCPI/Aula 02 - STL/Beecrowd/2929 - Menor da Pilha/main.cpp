/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2929
2929 - MENOR DA PILHA | RESOLVIDO EM C++
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

int main() {
    SPEED;

    stack<int> presentes;
    multiset<int> diversao;
    int n_casos, nivel_diversao;

    cin >> n_casos;
    cin.ignore();

    while (n_casos--) {
        string op;

        cin >> op;

        if (op == "PUSH") {
            cin >> nivel_diversao;
            presentes.push(nivel_diversao);
            diversao.insert(nivel_diversao);
            continue;
        }
        if (presentes.empty()) {
            cout << "EMPTY" << endl;
            continue;
        }
        if (op == "MIN") {
            cout << *diversao.begin() << endl;
            continue;
        }
        if (op == "POP") {
            diversao.erase(diversao.find(presentes.top()));
            presentes.pop();
            continue;
        }
    }

    return 0;
}
