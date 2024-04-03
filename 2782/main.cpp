// 2782 - ESCADINHA | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int i = 0;
    int dif = 1;
    int ant = 0;
    int aux = 0;

    cin >> N;

    vector<int> X(N);

    for (i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    for (i = 0; i < N; i++)
    {
        dif = X[i] - X[i - 1];
        if (dif != ant)
        {
            aux++;
        }
        ant = dif;
    }
    aux = aux - 1;

    if (N == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << aux << endl;
    }

    return 0;
}