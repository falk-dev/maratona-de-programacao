/*
 *  Link da questão: https://br.spoj.com/problems/PALAVRMG/
 *  PALAVRMG - PALAVRAS ORDENADAS | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] sort
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

    int n_casos;
    string palavra;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        bool aux = true;
        cin >> palavra;

        string palavra_reserva = palavra;

        for (auto &x : palavra_reserva)
        {
            x = tolower(x);
        }

        string palavra_reserva_reserva = palavra_reserva;

        sort(palavra_reserva.begin(), palavra_reserva.end());

        cout << palavra << ": ";

        if (palavra_reserva == palavra_reserva_reserva)
        {
            for (int j = 1; j < palavra.size(); j++)
            {
                if (palavra_reserva[j - 1] == palavra_reserva[j]) {
                    aux = false;
                    break;
                }
            }

            if (aux) cout << "O" << endl;
            else cout << "N" << endl;
        }
        else
            cout << "N" << endl;
    }

    return 0;
}