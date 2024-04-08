// 2534 - EXAME GERAL | RESOLVIDO EM C++

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    int Q = 0;
    int aux = 0;
    vector<int> H;

    while (cin >> N >> Q)
    {
        H.resize(N);

        for (int i = 0; i < H.size(); i++)
        {
            cin >> H[i];
        }

        sort(H.begin(), H.end(), greater<int>());

        for (int i = 0; i < Q; i++)
        {
            cin >> aux;

            cout << H[aux - 1] << endl;
        }
    }

    return 0;
}