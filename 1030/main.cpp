// 1030 - A LENDA DE JOSEPHUS | RESOLVIDO EM C++ 

#include <iostream>

using namespace std;

int josephus(int n, int k)
{
    return n > 1 ? (josephus(n - 1, k) + k - 1) % n + 1 : 1;
}

int main()
{
    int NC = 0;
    int n = 0;
    int k = 0;
    int i = 0;

    cin >> NC;

    for (i = 0; i < NC; i++)
    {
        cin >> n >> k;

        josephus(n, k);

        cout << "Case " << i + 1 << ": " << josephus(n, k) << endl;
    }

    return 0;
}