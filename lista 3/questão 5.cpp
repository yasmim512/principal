#include <iostream>
using namespace std;

int main() {
    int vetor[10], num, achou = 0;
    for(int i = 0; i < 10; i++) cin >> vetor[i];
    cout << "Digite o número a buscar: ";
    cin >> num;
    for(int i = 0; i < 10; i++)
        if(vetor[i] == num) achou = 1;
    cout << (achou ? "Número encontrado!" : "Número não encontrado!") << endl;
}
