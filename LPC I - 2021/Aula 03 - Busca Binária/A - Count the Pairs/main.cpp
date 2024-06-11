/*
Link da questão: https://vjudge.net/contest/434572#problem/A
A - COUNT THE PAIRS | RESOLVIDO EM C++
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

    int n_inteiros, diferenca, aux = 0, alvo;

    cin >> n_inteiros >> diferenca;

    vi numeros(n_inteiros);

    for (int i = 0; i < n_inteiros; i++) {
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());


    for (int i = 0; i < n_inteiros; i++) {
        alvo = numeros[i] - diferenca;

        int resp = busca_binaria(numeros, alvo);

        if (resp != -1) {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}