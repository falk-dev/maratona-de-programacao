/*
Link da questão:
1025 - ONDE ESTÁ O MÁRMORE? | RESOLVIDO EM C++
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
typedef priority_queue<pii, vector<pii>, greater<pii>> pq_min;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int busca_binaria(vi &vetor, int alvo) {
    ll l = 0, r = vetor.size(), mid;
    int ans = -1;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (vetor[mid] == alvo) {
            ans = mid;
            r = mid - 1; // Para números repetidos, encontrando a primeira ocorrência
        }

        if (vetor[mid] < alvo) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    return ans;
}

int main()
{
    SPEED;

    int n_marmores, n_consultas, alvo, i = 1;

    while (cin >> n_marmores >> n_consultas, n_consultas) {
        cout << "CASE# " << i << ":" << endl;
        vi marmores(n_marmores);

        for (int i = 0; i < n_marmores; i++) {
            cin >> marmores[i];
        }

        sort(marmores.begin(), marmores.end());

        for (int i = 0; i < n_consultas; i++) {
            cin >> alvo;

            int resp = busca_binaria(marmores, alvo);

            if(resp == -1) {
                cout << alvo << " not found" << endl;
            }
            else {
                cout << alvo << " found at " << resp + 1 << endl;
            }
        }
        i++;
    }

    return 0;
}