#include <iostream>
using namespace std;

int main() {
    int m[4][4], num, cont=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++) cin >> m[i][j];
    cout << "Número a procurar: ";
    cin >> num;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(m[i][j] == num) cont++;
    cout << "Ocorrências: " << cont << endl;
}
