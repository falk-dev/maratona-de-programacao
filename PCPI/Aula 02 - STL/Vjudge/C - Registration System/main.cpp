/*
 *  Link da questão: https://vjudge.net/contest/622702#problem/C
 *  C - REGISTRATION SYSTEM | RESOLVIDO EM C++
 *  Author: falk.dev
 *  [STL] - unordered_map, find
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
    unordered_map<string, int> database;

    cin >> n_casos;

    while (n_casos--)
    {
        string name;

        cin >> name;

        if (database.find(name) == database.end())
        {
            database.insert({name, 0});
            cout << "OK" << endl;
        }
        else {
            database[name]++;
            cout << name << database[name] << endl;
        }
    }

    return 0;
}