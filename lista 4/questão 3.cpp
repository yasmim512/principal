#include <iostream>
using namespace std;

int main() {
    int m[5][5], linha, soma = 0;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++) cin >> m[i][j];
    cout << "Digite o número da linha (0-4): ";
    cin >> linha;
    for(int j=0;j<5;j++) soma += m[linha][j];
    cout << "Soma da linha " << linha << ": " << soma << endl;
}
