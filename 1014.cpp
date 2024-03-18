// 1014 - CONSUMO | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X = 0;
    float Y = 0.0;
    float C = 0.0;

    cin >> X;
    cin >> Y;

    C = X / Y;

    cout << fixed << setprecision(3) << C << " km/l" << endl;
}