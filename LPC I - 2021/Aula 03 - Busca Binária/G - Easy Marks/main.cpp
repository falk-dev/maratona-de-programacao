/*
Link da questão:
xxxx - xxxx | RESOLVIDO EM C++
Author: falk.dev
Complexidade:
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

#define dbmap(map)                      \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl;

typedef long long ll;

typedef pair<int, int> pii; 
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef long double ld;
typedef priority_queue<pii, vector<pii>, greater<pii> > pq_min;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int busca_binaria(int nota_atual, int alvo, int n_testes) {
    ll l = 0, r = 1e3, mid;
    int media;

    for (int i = 0; i < 100; i++) {
        mid = (l + r) / 2;
        media = (nota_atual + mid) / n_testes;

        if (media == alvo) {
            r = mid;
        }

        if (media < alvo) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }
    
    return mid;
}

int main()
{
    SPEED;

    int n_casos, j = 1; 
    cin >> n_casos;

    while (n_casos--)
    {
        int num_testes, media, nota_atual = 0;

        cin >> num_testes >> media;

        int n_testes = num_testes + 1;

        vi notas(num_testes);

        for (int i = 0; i < num_testes; i++) {
            cin >> notas[i];
            nota_atual += notas[i];
        }

        cout << "Case " << j << ": ";
        j++;

        for (int i = 1; i <= 100; i++) {
            if (((nota_atual + i) / n_testes) == media) {
                cout << i << endl;
                break;
            }
        }

        
    }
    

    return 0;
}