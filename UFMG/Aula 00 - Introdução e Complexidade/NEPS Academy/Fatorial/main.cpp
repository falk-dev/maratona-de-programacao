/*
Link da questão: https://neps.academy/br/course/introducao-a-programacao/lesson/fatorial
FATORIAL | RESOLVIDO EM C++
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

int fatorial (int n) {
    if (n == 1 || n == 0) return 1;
    return n * fatorial(n - 1);
}

int main()
{
    SPEED;

    int n;

    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}