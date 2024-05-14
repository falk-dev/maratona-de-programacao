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

    vector<int> numbers(n_casos+1);

    for (int i = 0; i < n_casos; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int l = 1, r = numbers.size() - 1;

    while (l < r)
    {
        if (numbers[l] + numbers[r] < soma)
        {
            l++;
            if (numbers[l] + numbers[r] > soma)
            {
                r--;
            }
        }
        else
        {
            cout << l << " " << r << endl;
            break;
        }
    }

    return 0;
}