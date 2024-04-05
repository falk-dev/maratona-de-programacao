// 1171 - FREQUÊNCIA DE NÚMEROS | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    int i = 0;
    int X = 0;
    int aux = 0;

    cin >> N;
    
    vector<int> V(2000);
    
    for (i = 0; i < N; i++) {
        cin >> X;

        V[X] = V[X] + 1;
    }
    
    for (i = 0; i <= V.size(); i++) {
        if (V[i] != 0) {
            cout << i << " aparece " << V[i] << " vez(es)" << endl;
        }
    }
    
}