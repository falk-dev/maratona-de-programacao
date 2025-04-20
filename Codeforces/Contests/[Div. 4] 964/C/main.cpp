/*
 *  Link da questão:
 *  xxxx - xxxx | RESOLVIDO EM C++
 *  Author: falk.dev
 *
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

int main() {
    SPEED;

    ll casos;

    cin >> casos;

    while (casos--) {
        int qtd_intervalos, tempo_banho, dia, tempo = 0;
        pq_min eventos;

        cin >> qtd_intervalos >> tempo_banho >> dia;

        int inicio_aux, inicio, fim;

        for (int i = 0; i < qtd_intervalos; i++) {
            cin >> inicio >> fim;
            if (i == 0) inicio_aux = inicio;

            eventos.push(make_pair(inicio, fim));
        }

        if ((inicio_aux >= tempo_banho) || (dia - fim >= tempo_banho)) {
            tempo = tempo_banho;
        } else {
            while (!eventos.empty()) {
                int aux_f = eventos.top().first;
                int aux_s = eventos.top().second;

                eventos.pop();

                if (eventos.top().first - aux_s >= tempo_banho) {
                    tempo = tempo_banho;
                    break;
                }
            }
        }

        if (tempo >= tempo_banho) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}