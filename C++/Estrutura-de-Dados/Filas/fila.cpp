#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> fila;
    fila.push(1);
    fila.push(2);
    cout << "Frente: " << fila.front() << endl;
    fila.pop();
    cout << "Nova frente: " << fila.front() << endl;
    return 0;
}
