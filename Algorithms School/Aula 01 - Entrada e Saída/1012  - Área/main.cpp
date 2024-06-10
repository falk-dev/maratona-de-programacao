// 1012 - ÁREA | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A = 0;
    double B = 0;
    double C = 0;
    double ATR = 0;
    double AC = 0;
    double AT = 0;
    double AQ = 0;
    double AR = 0;

    cin >> A >> B >> C;

    ATR = (A * C) / 2;
    AC = 3.14159 * C * C;
    AT = ((A + B) * C) / 2;
    AQ = B * B;
    AR = A * B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << ATR << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << AC << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << AT << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << AQ << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << AR << endl;
}