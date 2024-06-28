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
typedef priority_queue<int, vector<int>, greater<int>> pq_min;

#define f first;
#define s second;

#define db_pair(x) cout << #x << ": " << x.first << ", " << x.second << endl;

int main()
{
    SPEED;

    int n;

    while (cin >> n, n)
    {
        pq_min nums;
        int num;

        for (int i = 0; i < n; i++)
        {
            cin >> num;

            nums.push(num);
        }

        int aux = 0;
        int a = 0;
        int b = 0;

        while (nums.size() > 1)
        {
            a = nums.top();
            nums.pop();
            b = nums.top();
            nums.pop();
            
            aux += a + b;

            nums.push(a + b);
        }

        cout << aux << endl;
    }

    return 0;
}