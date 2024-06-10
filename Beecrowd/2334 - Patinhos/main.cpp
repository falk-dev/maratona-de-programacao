/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/2334
2334 - PATINHOS | RESOLVIDO EM C++
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

    unsigned long long int patinhos;

    while (cin >> patinhos)
    {
        if (patinhos == -1)
        {
            break;
        }
        else
        {
            if (patinhos == 0)
            {
                cout << "0" << endl;
            }
            else
            {
                cout << patinhos - 1 << endl;
            }
        }
    }

    return 0;
}