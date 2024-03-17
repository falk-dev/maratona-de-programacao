// 3060 - PARCELAMENTO SEM JUROS | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int V = 0;
    int P = 0;
    int i = 0;
    int R = 0;
    int aux = 0;

    cin >> V;
    cin >> P;

    R = V % P;

    if (R == 0)
    {
        for (i = 0; i < P; i++)
        {
            cout << V / P << endl;
        }
    }
    else
    {
        while (R > i)
        {
            cout << (V / P) + 1 << '\n';
            i++;
        }
        aux = i;
        for (int i = 0; i < P - aux; i++)
            cout << V / P << '\n';
    }

    return 0;
}