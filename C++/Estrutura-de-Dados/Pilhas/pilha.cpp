#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;
    pilha.push(10);
    pilha.push(20);
    cout << "Topo: " << pilha.top() << endl;
    pilha.pop();
    cout << "Novo topo: " << pilha.top() << endl;
    return 0;
}
