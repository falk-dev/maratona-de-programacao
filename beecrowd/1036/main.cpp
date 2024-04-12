// 1036 - FÓRMULA DE BHASKARA | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C, d, b1, b2;

    cin >> A >> B >> C;

    if (A != 0)
    {
        d = (pow(B, 2)) - (4 * A * C);
        if (d > 0)
        {
            b1 = (-B + sqrt(d)) / (2 * A);
            b2 = (-B - sqrt(d)) / (2 * A);

            cout << fixed << setprecision(5);
            cout << "R1 = " << b1 << endl;
            cout << "R2 = " << b2 << endl;
        }
        else
        {
            cout << "Impossivel calcular" << endl;
        }
    }
    else
    {
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}