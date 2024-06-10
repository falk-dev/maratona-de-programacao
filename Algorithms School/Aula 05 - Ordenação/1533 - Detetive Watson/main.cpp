// 1533 - DETETIVE WATSON | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    int aux = 0;
    vector<int> P;
    vector<int> PO;

    while (cin >> N, N)
    {
        P.resize(N);
        PO.resize(N);

        for (int i = 0; i < P.size(); i++)
        {
            cin >> P[i];
            PO[i] = P[i];
        }

        sort(PO.begin(), PO.end(), greater<int>());

        for (int i = 0; i < P.size(); i++)
        {
            if (P[i] == PO[1])
            {
                aux = i + 1;
                cout << aux << endl;
            }
        }
        aux = 0;
    }
}