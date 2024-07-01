/*
 *  Link da questão: https://codeforces.com/problemset/problem/519/B
 *  519B - A AND B AND COMPILATION ERRORS | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] sort, vector
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

    vi firstcase(n_casos);
    vi secondcase(n_casos);
    vi thirdcase(n_casos);

    for (int i = 0; i < n_casos; i++) {
        cin >> firstcase[i];
    }

    for (int i = 0; i < n_casos - 1; i++) {
        cin >> secondcase[i];
    }

    for (int i = 0; i < n_casos - 2; i++) {
        cin >> thirdcase[i];
    }

    sort(firstcase.begin(), firstcase.end(), greater<int>());
    sort(secondcase.begin(), secondcase.end(), greater<int>());
    sort(thirdcase.begin(), thirdcase.end(), greater<int>());

    for (int i = 0; i < n_casos; i++) {
        if (firstcase[i] != secondcase[i]) {
            cout << firstcase[i] << endl;
            break;
        }
    }

    for (int i = 0; i < n_casos; i++) {
        if (secondcase[i] != thirdcase[i]) {
            cout << secondcase[i] << endl;
            break;
        }
    }

    return 0;
}