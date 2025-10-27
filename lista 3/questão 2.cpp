#include <iostream>
using namespace std;

int main() {
    int vetor[15], maior, menor;
    for(int i = 0; i < 15; i++) cin >> vetor[i];
    maior = menor = vetor[0];
    for(int i = 1; i < 15; i++) {
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    cout << "Maior: " << maior << "\nMenor: " << menor << endl;
}
