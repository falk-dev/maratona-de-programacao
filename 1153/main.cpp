// 1153 - FATORIAL SIMPLES | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, aux = 1;

    cin >> N;

    for (int i = N; i > 0; i--)
    {
        aux = aux * i;
    }

    cout << aux << endl;

    return 0;
}