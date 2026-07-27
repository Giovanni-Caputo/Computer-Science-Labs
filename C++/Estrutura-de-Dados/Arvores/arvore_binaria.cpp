#include <iostream>
using namespace std;

struct No {
    int valor;
    No* esquerda;
    No* direita;
};

int main() {
    No* raiz = new No{10, nullptr, nullptr};
    cout << "Raiz da arvore: " << raiz->valor << endl;
    return 0;
}
