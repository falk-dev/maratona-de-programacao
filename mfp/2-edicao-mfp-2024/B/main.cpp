// B[MFP] - COGUMELOS || RESOLVIDO EM C++
// Author: falk.dev

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4, aux = 0;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    if (x1 == x2) {
        if (y1 != y3) {
            aux = abs((x1 - x3) * (y1 - y3));
        } else {
            aux = abs((x1 - x3) * (y1 - y4));
        }
    }

    else if (x1 == x3) {
        if (y1 != y2) {
            aux = abs((x1 - x2) * (y1 - y2));
        } else {
            aux = abs((x1 - x2) * (y1 - y4));
        }
    }

    else if (x1 == x4) {
        if (y1 != y3) {
            aux = abs((x1 - x3) * (y1 - y3));
        } else {
            aux = abs((x1 - x3) * (y1 - y2));
        }
    }

    else if (x2 == x3) {
        if (y2 != y4) {
            aux = abs((x2 - x4) * (y2 - y4));
        } else {
            aux = abs((x2 - x4) * (y2 - y1));
        }
    }

    else if (x2 == x4) {
        if (y2 != y3) {
            aux = abs((x2 - x3) * (y2 - y3));
        } else {
            aux = abs((x2 - x3) * (y2 - y1));
        }
    }

    else if (x3 == x4) {
        if (y3 != y3) {
            aux = abs((x3 - x2) * (y3 - y2));
        } else {
            aux = abs((x3 - x2) * (y3 - y1));
        }
    }

    cout << aux << endl;

    return 0;
}
