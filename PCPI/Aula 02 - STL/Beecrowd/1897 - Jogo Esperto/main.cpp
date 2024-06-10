/*
Link da questão: https://judge.beecrowd.com/pt/problems/view/1897
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

int main()
{
    SPEED;
    queue<pair<int,int>> operations;
    pair<int, int> par_frente;
    int n, m, i = 1;

    cin >> n >> m;

    operations.push ({n * 2});
    operations.push ({n * 3});
    operations.push ({n / 2});
    operations.push ({n / 3});
    operations.push ({n + 7});
    operations.push ({n - 7});

   

    // while (par_frente.second != m) {
        

    //     i++;
    // }


    return 0;
}