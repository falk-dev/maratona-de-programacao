// 1548 - FILA DO RECREIO | RESOLVIDO EM C++

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;
    int p = 0;
    int aux = 0;
    vector<int> NO;
    vector<int> O;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> M;

        NO.resize(M);
        O.resize(M);

        for (int j = 0; j < NO.size(); j++)
        {
            cin >> NO[j];
            O[j] = NO[j];
        }

        sort(O.begin(), O.end(), greater<int>());

        for (int j = 0; j < NO.size(); j++)
        {
            if (NO[j] == O[j])
            {
                aux++;
            }
        }

        cout << aux << endl;
        aux = 0;
    }

    return 0;
}