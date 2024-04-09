// 2879 - DESVENDANDO MONTY HALL | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int A;
    int aux = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A;

        if (A != 1)
        {
            aux++;
        }
    }

    cout << aux << endl;

    return 0;
}