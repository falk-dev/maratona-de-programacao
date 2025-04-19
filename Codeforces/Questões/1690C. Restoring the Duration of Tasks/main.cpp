/*
 *  Link da questão: https://codeforces.com/problemset/problem/1690/C
 *  1690C - RESTORING THE DURATION OF TASKS | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] vector
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

int main()
{
    SPEED;
    
    int n_casos;
    cin >> n_casos;
    
    while (n_casos--) {
        int tarefas, dif = 0;
        cin >> tarefas;
        
        vi chegada(tarefas);
        vi final(tarefas);
        
        for (int i = 0; i < tarefas; i++) {
            cin >> chegada[i];
        }
        
        for (int i = 0; i < tarefas; i++) {
            cin >> final[i];
        }
        
        dif = final[0] - chegada[0];
        cout << dif << " ";
        
        for (int i = 1; i < tarefas; i++) {
            if (chegada[i] > final[i - 1]) {
                dif = final[i] - chegada[i];
            } 
            else if (chegada[i] <= final[i - 1]) {
                dif = final[i] - final[i - 1];
            }
            cout << dif << " ";
        }
        cout << endl;
    }

    return 0;
}










