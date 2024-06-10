// 1011 - ESFERA | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double R = 0.00;
    double V = 0.00;
    double pi = 3.14159;

    cin >> R;

    V = (4.0 / 3) * pi * R * R * R;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << V << endl;

    return 0;
}