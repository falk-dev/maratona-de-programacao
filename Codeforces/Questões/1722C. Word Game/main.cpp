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

int main()
{
    SPEED;

    int n_casos;
    cin >> n_casos;

    while (n_casos--)
    {
        int n_words;
        cin >> n_words;

        string palavra;

        unordered_map<string, int> palavras;
        vector<string> p1(n_words);
        vector<string> p2(n_words);
        vector<string> p3(n_words);

        for (int j = 0; j < n_words; j++)
        {
            cin >> p1[j];
            palavras[p1[j]]++;
        }

        for (int j = 0; j < n_words; j++)
        {
            cin >> p2[j];
            palavras[p2[j]]++;
        }

        for (int j = 0; j < n_words; j++)
        {
            cin >> p3[j];
            palavras[p3[j]]++;
        }

        int aux = 0;

        for (int j = 0; j < n_words; j++)
        {
            if (palavras[p1[j]] == 1)
            {
                aux += 3;
            }
            else if (palavras[p1[j]] == 2)
            {
                aux += 1;
            }
        }
        cout << aux << " ";

        aux = 0;

        for (int j = 0; j < n_words; j++)
        {
            if (palavras[p2[j]] == 1)
            {
                aux += 3;
            }
            else if (palavras[p2[j]] == 2)
            {
                aux += 1;
            }
        }
        cout << aux << " ";

        aux = 0;

        for (int j = 0; j < n_words; j++)
        {
            if (palavras[p3[j]] == 1)
            {
                aux += 3;
            }
            else if (palavras[p3[j]] == 2)
            {
                aux += 1;
            }
        }
        cout << aux << endl;
    }

    return 0;
}