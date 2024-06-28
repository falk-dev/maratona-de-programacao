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

int main()
{
    SPEED;

    int n_op;
    deque<int> n;
    bool aux = true;

    cin >> n_op;

    while (n_op--)
    {
        string comando;
        int num;

        cin >> comando;

        if (comando == "back")
        {
            if (!n.empty())
            {
                if (aux)
                {
                    cout << n.back() << endl;
                    n.pop_back();
                }
                else
                {
                    cout << n.front() << endl;
                    n.pop_front();
                }
            }
            else
            {
                cout << "No job for Ada?" << endl;
            }
            continue;
        }
        else if (comando == "front")
        {
            if (!n.empty())
            {
                if (aux)
                {
                    cout << n.front() << endl;
                    n.pop_front();
                }
                else
                {
                    cout << n.back() << endl;
                    n.pop_back();
                }
            }
            else
            {
                cout << "No job for Ada?" << endl;
            }
            continue;
        }
        else if (comando == "reverse")
        {
            if (!n.empty())
            {
                if (aux)
                {
                    aux = false;
                }
                else
                {
                    aux = true;
                }
            }
            continue;
        }
        else if (comando == "push_back")
        {
            cin >> num;
            if (aux)
            {
                n.push_back(num);
            }
            else
            {
                n.push_front(num);
            }
            continue;
        }
        else if (comando == "toFront")
        {
            cin >> num;
            if (aux)
            {
                n.push_front(num);
            }
            else {
                n.push_back(num);
            }
            continue;
        }
    }

    return 0;
}