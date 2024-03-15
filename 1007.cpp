// 1007 - DIFERENÇA | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int DIFERENCA = 0;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    
    DIFERENCA = ((A * B) - (C * D));

    cout << "DIFERENCA = " << DIFERENCA << endl;

    return 0;
}