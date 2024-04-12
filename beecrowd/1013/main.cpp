// 1013 - O MAIOR | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int maiorAB = 0;

    cin >> A >> B >> C;

    maiorAB = (A + B + abs(A - B)) / 2;

    if (C > maiorAB) {
        cout << C << " eh o maior" << endl;
    } else {
        cout << maiorAB << " eh o maior" << endl;
    }
}