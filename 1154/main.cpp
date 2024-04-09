// 1154 - IDADES | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    float aux = 0;
    int i = 0;

    while (N > 0)
    {
        cin >> N;

        if (N > 0)
        {
            aux = aux + N;
            i++;
        }
    }

    float media = aux / i;

    cout << fixed << setprecision(2);
    cout << media << endl;

    return 0;
}