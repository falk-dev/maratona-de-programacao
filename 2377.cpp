// 2377 - PEDÁGIO | RESOLVIDO EM C++

#include <iostream>

using namespace std;

int main()
{
    int L = 0;
    int D = 0; 
    int K = 0;
    int P = 0;
    int CG = 0;
    int CP = 0;
    int i = 0;
    int CT = 0;

    cin >> L >> D;
    cin >> K >> P;

    CG = L * K;

    if (L >= D)
    {
        do
        {
            CP = P * i;
            i++;
        } while (D * i <= L);
    }
    
    CT = CP + CG;
    cout << CT << endl;

    return 0;
}