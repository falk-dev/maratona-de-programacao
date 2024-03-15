// 1008 - SALÁRIO | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int M = 0;
    int H = 0;
    float V = 0;
    float S = 0;

    cin >> M;
    cin >> H;
    cin >> V;

    S = H * V;

    cout << "NUMBER = " << M << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << S << endl;

    return 0;
}