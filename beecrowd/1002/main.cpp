// 1002 - ÁREA DO CÍRCULO | RESOLVIDO EM C++

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double n;
    double raio; 
    double area;
    cout << fixed << setprecision(4);    
    n = 3.14159;
    cin >> raio;
    area = n * raio * raio;

    cout << "A=" << area << endl;
}