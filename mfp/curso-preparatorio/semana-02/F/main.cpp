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

    bool aux = false;
    int n_casos, soma, numero;

    cin >> n_casos >> soma;

    vector<pair<int, int>> numbers(n_casos + 1);

    for (int i = 0; i < n_casos; i++)
    {
        cin >> numero;
        numbers[i] = make_pair(numero, i + 1);
    }

    sort(numbers.begin(), numbers.end());

    int l = 1, r = numbers.size() - 1;

    while (l < r)
    {
        if (numbers[l].first + numbers[r].first < soma)
        {
            l++;
        }
        else if (numbers[l].first + numbers[r].first > soma)
        {
            r--;
        }
        else if (numbers[l].first + numbers[r].first == soma)
        {
            aux = true;
            break;
        }
    }

    if (aux == true)
    {
        if (numbers[l].second < numbers[r].second)
        {
            cout << numbers[l].second << " " << numbers[r].second << endl;
        }
        else
        {
            cout << numbers[r].second << " " << numbers[l].second << endl;
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}