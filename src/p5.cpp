#include <iostream>
using namespace std;

void mv(int d, int f, int t) {
    cout << "Move disk " << d << " from " << f << " to " << t << "\n";
}

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        if (abs(from - to) == 1) {
            mv(1, from, to); 
        } 
        else {
            mv(1, from, aux);      
            mv(1, aux, to);
        }
        return;
    }

    if (abs(from - to) == 1) {
        hanoi(n - 1, from, aux, to);
        mv(n, from, to);
        hanoi(n - 1, aux, to, from);
    }
    else {
        hanoi(n - 1, from, to, aux);
        mv(n, from, aux);
        hanoi(n - 1, to, aux, from);

        hanoi(n - 1, aux, from, to);
        mv(n, aux, to);
        hanoi(n - 1, from, to, aux);
    }
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}
