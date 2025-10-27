#include <iostream>
using namespace std;

int main() {
    float vetor[8], soma = 0;
    for(int i = 0; i < 8; i++) cin >> vetor[i];
    for(int i = 0; i < 8; i++) soma += vetor[i];
    cout << "Média: " << soma / 8 << endl;
}
