// 1153 - FATORIAL SIMPLES | RESOLVIDO EM C++
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

int fat(int num)
{
    if (num == 1 || num == 0) return 1;
    return num * fat(num - 1);
}

int main()
{
    SPEED;

    int num;

    cin >> num;

    cout << fat(num) << endl;

    return 0;
}