#include <iostream>
using namespace std;

int main() {
    int m[3][3], soma = 0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) {
            cin >> m[i][j];
            soma += m[i][j];
        }
    cout << "Soma: " << soma << endl;
}
