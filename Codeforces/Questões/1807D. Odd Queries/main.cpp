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

int main() {
    SPEED;

    int n_casos;
    cin >> n_casos;

    while (n_casos--) {
        int tam_array, num_queries;
        cin >> tam_array >> num_queries;
        vi elementos(tam_array + 1);

        for (int i = 1; i <= tam_array; i++) {
            cin >> elementos[i];
        }

        vi prefix_sum(tam_array + 1);
        vi suffix_sum(tam_array + 2);
        suffix_sum[tam_array] = elementos[tam_array];

        for (int i = 1; i <= tam_array; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + elementos[i];
        }

        for (int i = tam_array - 1; i > 0; i--) {
            suffix_sum[i] = suffix_sum[i + 1] + elementos[i];
        }

        for (int i = 0; i < num_queries; i++) {
            int l, r, k;
            cin >> l >> r >> k;

            int pf = prefix_sum[l - 1];
            int sf = suffix_sum[r + 1];

            int qe = (r - l + 1) * k;
            int ans = pf + sf + qe;

            if (ans % 2 == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}