#include <iostream>

#include <cstdlib>  // Para as funções rand() e srand()
using std::srand;
using std::rand;

#include <ctime>    // Para a função time()
using std::time; //

int main() {
    // Semente para o gerador de números aleatórios baseada no tempo atual
    srand(static_cast<unsigned int>(time(nullptr)));

    // Defina o intervalo desejado
    int min_valor = 1;  // Valor mínimo do intervalo
    int max_valor = 100;  // Valor máximo do intervalo

    // Gere um número aleatório dentro do intervalo
    int numero_aleatorio = min_valor + rand() % (max_valor - min_valor + 1);

    // Exiba o número aleatório gerado
    std::cout << "Numero aleatorio gerado: " << numero_aleatorio << '\n';

    return 0;
}
