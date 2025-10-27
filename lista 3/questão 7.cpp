#include <iostream>
using namespace std;

int main() {
    int v1[10], v2[10];
    for(int i = 0; i < 10; i++) cin >> v1[i];
    for(int i = 0; i < 10; i++) v2[i] = v1[9 - i];
    cout << "Vetor invertido: ";
    for(int i = 0; i < 10; i++) cout << v2[i] << " ";
}
