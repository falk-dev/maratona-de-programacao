/*
 *  Link da questão: https://judge.beecrowd.com/pt/problems/view/1068
 *  1068 - BALANÇO DE PARÊNTESES I | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] stack, string
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

#define dbmap(map)                                  \
    for (auto e : map)                              \
        cout << e.first << " " << e.second << endl; \
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

int main() {
    SPEED;

    string expressao;

    while (getline(cin, expressao)) {
        stack<char> pilha;
        for (int i = 0; i < expressao.size(); i++) {
            if (expressao[i] == '(') {
                pilha.push(expressao[i]);
                continue;
            }

            if (expressao[i] == ')') {
                if (pilha.empty()) {
                    pilha.push(expressao[i]);
                    break;
                } else {
                    pilha.pop();
                    continue;
                }
            }
        }

        if (pilha.size() >= 1) {
            cout << "incorrect" << endl;
        } else {
            cout << "correct" << endl;
        }
    }

    return 0;
}