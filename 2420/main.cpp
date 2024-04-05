// 2420 - GUERRA POR TERRITÓRIO | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int aux = 0;
   
    cin >> N;
   
    vector<int> V(N);
   
    for (i = 0; i < N; i++) {
        cin >> V[i];
        j = j + V[i];
    }
   
    j = j / 2;
   
    for (i = 0; i < V.size(); i++) {
        if (k < j) {
            k = k + V[i];
            aux++;
        }
    }
    
    cout << aux << endl;
   
}