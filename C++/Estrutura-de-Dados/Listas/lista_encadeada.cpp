#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

int main() {
    No* inicio = nullptr;
    No* novo = new No{10, nullptr};
    novo->proximo = inicio;
    inicio = novo;
    cout << "Elemento inserido na lista." << endl;
    return 0;
}
