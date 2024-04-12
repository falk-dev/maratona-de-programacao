// 2663 - FASE | RESOLVIDO EM C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;
    int K = 0;
    int i = 0;
    int j = 0;
    int aux = 0;

    cin >> N;
    cin >> K;

    aux = K;

    vector<int> X(N);

    for (i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    sort(X.begin(), X.end(), greater<int>());

    for (i = 0; i < N; i++)
    {
        if (X[K] == X[K - 1])
        {
            while(X[K+j] == X[K-1]) {
                aux++;
                j++;
            }
        }
    }

    cout << aux << endl;

    return 0;
}