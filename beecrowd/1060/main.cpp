// 1060 - NÚMEROS POSITIVOS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float N = 0;
    int aux = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> N;

        if (N > 0) {
            aux++;
        }
    }

    cout << aux << " valores positivos" << endl;

    return 0;
}