// 2779 - ÁLBUM DA COPA | RESOLVIDO EM C++

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;
    int i = 0;
    int aux = 0;
    int j = 0;
    int total = 0;
    
    cin >> N;
    cin >> M;
    
    vector<int> X(N+1);
    
    for (i = 1; i <= M; i++) {
        cin >> aux;
        X[aux] = 1;
    }
    
    for (i = 1; i < X.size(); i++) {
        if (X[i] == 1) {
            j++;
        }
    }
    
    total = N - j;
    
    cout << total << endl;
    
    

    return 0;
}