// 2312 - QUADRO DE MEDALHAS | RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;
struct MD {
    string PA;
    int O;
    int P;
    int B;
};

bool comp(MD o1, MD o2) {
    if (o1.O > o2.O) {
        return o1.O > o2.O;
    }

    if (o1.O != o2.O) {
        return o1.O > o2.O;
    }
    if (o1.P != o2.P) {
        return o1.P > o2.P;
    }
    if (o1.B != o2.B) {
        return (o1.B > o2.B);
    }

    return (o1.PA < o2.PA);
}

int main() {
    int N = 0;

    cin >> N;

    vector<MD> paises(N);

    for (int i = 0; i < N; i++) {
        cin >> paises[i].PA >> paises[i].O >> paises[i].P >> paises[i].B;
    }

    sort(paises.begin(), paises.end(), comp);

    for (int i = 0; i < N; i++) {
        cout << paises[i].PA << " " << paises[i].O << " " << paises[i].P << " " << paises[i].B << endl;
    }

    return 0;
}