#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valorMetro, area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetro;

    area = largura * comprimento;
    preco = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << " m2" << endl;
    cout << "Preco do terreno = R$ " << preco << endl;

    return 0;
}
