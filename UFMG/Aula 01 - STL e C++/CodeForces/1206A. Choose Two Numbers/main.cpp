/*
 *  Link da questão: https://codeforces.com/problemset/problem/1206/A
 *  1206A - CHOOSE TWO NUMBERS | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] - find, quadrático
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

#define dbmap(map)                          \
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

    int qtd_A, qtd_B, soma = 0;

    cin >> qtd_A;
    vi A(qtd_A);

    for (int i = 0; i < qtd_A; i++)
    {
        cin >> A[i];
    }

    cin >> qtd_B;
    vi B(qtd_B);

    for (int i = 0; i < qtd_B; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < qtd_A; i++)
    {
        for (int j = 0; j < qtd_B; j++)
        {
            soma = A[i] + B[j];

            auto itA = find(A.begin(), A.end(), soma);
            auto itB = find(B.begin(), B.end(), soma);

            if (itA == A.end() && itB == B.end())
            {
                cout << A[i] << " " << B[j] << endl;
                return 0;
            }
        }
    }
}