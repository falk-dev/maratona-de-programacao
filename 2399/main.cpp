// 2399 - CAMPO MINADO | RESOLVIDO EM C++

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    
    int N = 0;
    int i = 0;
    int M = 0;
    
    cin >> N;
    
    vector<int> X(N);
    
    for (i = 0; i < N; i++) {
        cin >> X[i];
    }
    
    for (i = 0; i < X.size(); i++) {
        if(X[i]== 1) {
            M++;
        }
        if (X[i+1] == 1) {
            M++;
        }
        if (X[i-1] == 1) {
            M++;
        }
        
        cout << M << endl;
        M = 0;
    }
 
    return 0;
}