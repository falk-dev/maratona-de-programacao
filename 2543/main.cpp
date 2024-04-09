// 2543 - JOGATINA UFPR | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 1, I = 1, i, j, aux = 0;

    while (cin >> N, I)
    {
        for (int k = 0; k < N; k++)
        {
            cin >> i >> j;

            if (i == I)
            {
                if (j == 0)
                {
                    aux++;
                }
            }
        }
    }

    cout << aux << endl;

    return 0;
}