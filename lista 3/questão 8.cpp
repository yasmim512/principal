#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quantos termos da sequência? ";
    cin >> n;
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for(int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
