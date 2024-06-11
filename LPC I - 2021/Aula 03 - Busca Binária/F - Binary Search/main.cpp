/*
Link da questão:
F - Binary Search | RESOLVIDO EM C++
Author: falk.dev
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
typedef priority_queue<pii, vector<pii>, greater<pii>> min_pq;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int busca_binaria(vi &vetor, int alvo) {
    ll l = 0, r = vetor.size(), mid;

    while (l <= r) {
        mid = l + (r - l) / 2;

        if (vetor[mid] == alvo) {
            return mid;
        }

        if (vetor[mid] < alvo) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    
    return -1;
}

int main()
{
    SPEED;

    int tam_vector, qtd_testes;

    cin >> tam_vector >> qtd_testes;

    vi nums(tam_vector);

    for (int i = 0; i < tam_vector; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < qtd_testes; i++) {
        int alvo; cin >> alvo;

        bool resp = binary_search(nums.begin(), nums.end(), alvo);

        if (resp) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}