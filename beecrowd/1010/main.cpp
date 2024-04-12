// 1010 - CÁLCULO SIMPLES | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int C1 = 0;
    int N1 = 0;
    float V1 = 0;
    int C2 = 0;
    int N2 = 0;
    float V2 = 0;
    float P = 0;

    cin >> C1 >> N1 >> V1;
    cin >> C2 >> N2 >> V2;

    P = (N1 * V1) + (N2 * V2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << P << endl;

    return 0;
}