#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int cont = 0;
    int valor = 0;
    for(int i = 0; i < SIZE; i++){
        cin>> valor;
        if(valor<0){
            cont++;
        }
    }
    cout << cont;
    return 0;
}
