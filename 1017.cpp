// 1017 - GASTO DE COMBUSTÍVEL | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int T = 0;
    int V = 0;
    float G = 0.0;

    cin >> T;
    cin >> V;

    G = (T * V) / 12.0;

    cout << fixed << setprecision(3) << G << endl;

    return 0;
}