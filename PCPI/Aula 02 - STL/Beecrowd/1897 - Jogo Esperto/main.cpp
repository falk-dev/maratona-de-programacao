/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2406
1897 - JOGO ESPERTO | RESOLVIDO EM C++
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

    ll n, m;
    queue<pair<ll, ll>> operacoes;
    set<int> memo;

    cin >> n >> m;

    operacoes.push({0, n});

    pair<ll, ll> frente = operacoes.front();

    while (frente.second != m) {
        frente = operacoes.front();

        if (memo.find(frente.second) != memo.end()) {
            operacoes.pop();
            continue;
        }

        operacoes.push({frente.first + 1, frente.second * 2});
        operacoes.push({frente.first + 1, frente.second * 3});
        operacoes.push({frente.first + 1, frente.second / 2});
        operacoes.push({frente.first + 1, frente.second / 3});
        operacoes.push({frente.first + 1, frente.second + 7});
        operacoes.push({frente.first + 1, frente.second - 7});

        memo.insert(frente.second);

        operacoes.pop();
    }

    frente = operacoes.front();

    cout << frente.first << endl;
}