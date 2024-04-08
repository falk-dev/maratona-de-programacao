// 2567 - VIRUS | RESOLVIDO EM C++

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    int aux = 0;
    vector<int> D;

    while (cin >> N)
    {
        D.resize(N);
        int j = 0;
        int k = N - 1;

        for (int i = 0; i < D.size(); i++)
        {
            cin >> D[i];
        }

        sort(D.begin(), D.end(), greater<int>());

        while (j < k)
        {
            aux = aux + D[j] - D[k];
            j++;
            k--;
        }

        cout << aux << endl;
        aux = 0;
    }

    return 0;
}