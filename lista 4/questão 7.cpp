#include <iostream>
using namespace std;

int main() {
    int m[2][2];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    cout << "Matriz completa:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) cout << m[i][j] << " ";
        cout << endl;
    }
}
