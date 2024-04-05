// 3050 - DISTÂNCIA ENTRE AMIGOS | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int i = 0;
    int j = 0;
    int aux = 0;
    int maior = 0;
    vector<int> X;

    cin >> N;

    X.resize(N + 1);

    for (i = 1; i < X.size(); i++)
    {
        cin >> X[i];
    }

    for (i = 1; i < X.size(); i++)
    {
        for (j = i+1; j <= N; j++)
        {
            aux = X[i] + (abs(j-i)) + X[j];

            if (aux > maior) {
                maior = aux;
            }
        }

    }

    if (N == 1) {
        cout << X[1];
    } else {
    cout << maior << endl;}

    return 0;
}
