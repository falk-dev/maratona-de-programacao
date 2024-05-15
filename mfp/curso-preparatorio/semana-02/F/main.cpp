/*
Link da questão: https://vjudge.net/contest/627742#problem/F
F - xxxx | RESOLVIDO EM C++
Author: falk.dev
Complexidade:
*/

#include <bits/stdc++.h>

using namespace std;

#define dbvector(vector)          \
    {                             \
        cout << #vector << " = "; \
        for (auto &it : vector)   \
            cout << it << " ";    \
        cout << endl;             \
    }

#define SPEED                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

#define dbg(x) cout << #x << " = " << x << endl;

typedef long long ll;

#define f first;
#define s second;

int main()
{
    SPEED;

    int n_casos, soma;

    cin >> n_casos >> soma;

    vector<int> numbers(n_casos + 1);
    vector<int> numbers_order(n_casos + 1);

    for (int i = 0; i < n_casos; i++)
    {
        cin >> numbers[i];
        numbers_order[i] = numbers[i];
    }

    sort(numbers_order.begin(), numbers_order.end());

    int l = 0, r = numbers.size() - 1;

    while (l < r)
    {
        if (numbers_order[l] + numbers_order[r] < soma)
        {
            l++;
        }
        if (numbers_order[l] + numbers_order[r] > soma)
        {
            r--;
        }
        if (numbers_order[l] + numbers_order[r] == soma)
        {
            for (int i = 0; i < n_casos; i++)
            {
                if (numbers[i] == numbers_order[l])
                {
                    cout << i + 1 << " ";
                }
                else if (numbers[i] == numbers_order[r])
                {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
            break;
        }
    }

    return 0;
}