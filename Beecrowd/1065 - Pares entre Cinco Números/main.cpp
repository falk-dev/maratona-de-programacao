// 1065 - PARES ENTRE CINCO NÚMEROS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, aux;

    for (int i = 0; i < 5; i++)
    {
        cin >> N;

        if (N % 2 == 0)
        {
            aux++;
        }
    }

    cout << aux << " valores pares" << endl;

    return 0;
}