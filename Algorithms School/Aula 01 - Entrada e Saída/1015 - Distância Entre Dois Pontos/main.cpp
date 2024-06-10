// 1015 - DISTÂNCIA ENTRE DOIS PONTOS | RESOLVIDO EM C++

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float X1 = 0.0;
    float Y1 = 0.0;
    float X2 = 0.0;
    float Y2 = 0.0;
    float d = 0.0;

    cin >> X1 >> Y1;
    cin >> X2 >> Y2;

    d = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    cout << fixed << setprecision(4) << d << endl;

    return 0;
}