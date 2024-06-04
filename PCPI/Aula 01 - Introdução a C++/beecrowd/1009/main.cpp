// 1009 - SALÁRIO COM BÔNUS || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    string N;
    double S = 0;
    double V = 0;
    double C = 0;

    cin >> N;
    cin >> S >> V;

    C = V * 0.15;
    S = S + C;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << S << endl;

    return 0;
}