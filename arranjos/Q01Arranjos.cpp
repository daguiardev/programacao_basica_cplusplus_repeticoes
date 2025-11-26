// ...existing code...
#include <iostream>
#include <algorithm> // std::fill_n
#include <array>     // std::array (opcional, C++11+)
#include <string>
using namespace std;

int main() {
    // 1) Declaração com tamanho e atribuição posterior (elemento a elemento)
    const int quant_meses = 12;
    int meses[quant_meses] = {1,2,3,4,5,6,7,8,9,10,11,12}; // exemplo adicional
    string nomes_meses[quant_meses];

    int indice = 0;
    while (indice < quant_meses)
    {
        cout << "Informe o nome do mês " << meses[indice] << ": ";
        cin >> nomes_meses[indice];
        indice++;
    }
    
    indice = 0;
    while (indice < quant_meses)
    {
        cout << "Mês " << meses[indice] << ": " << nomes_meses[indice] << "." << endl;
        indice++;
    }
    

/*
    std::cout << "a: ";
    for (int i = 0; i < N1; ++i) std::cout << a[i] << (i+1 < N1 ? " " : "\n");

    // 2) Inicialização na declaração (inicializador de lista)
    int b[] = {1, 2, 3, 4}; // tamanho deduzido (4)
    std::cout << "b: ";
    for (int i = 0; i < 4; ++i) std::cout << b[i] << (i+1 < 4 ? " " : "\n");

    // 3) Declarar com tamanho e inicializar todos com um valor (lista parcial -> resto zeros)
    int c[6] = {7}; // c[0] = 7, c[1..5] = 0
    std::cout << "c: ";
    for (int i = 0; i < 6; ++i) std::cout << c[i] << (i+1 < 6 ? " " : "\n");

    // 4) Preenchimento por laço
    const int N4 = 8;
    int d[N4];
    for (int i = 0; i < N4; ++i) d[i] = i * 2; // atribui valores calculados
    std::cout << "d: ";
    for (int i = 0; i < N4; ++i) std::cout << d[i] << (i+1 < N4 ? " " : "\n");

    // 5) Usando std::fill_n (algorithm) para atribuir um mesmo valor
    int e[5];
    std::fill_n(e, 5, -1); // todos os 5 elementos ficam com -1
    std::cout << "e: ";
    for (int i = 0; i < 5; ++i) std::cout << e[i] << (i+1 < 5 ? " " : "\n");

    // 6) Alternativa moderna: std::array (tem tamanho fixo, melhor integração com std::)
    std::array<int,4> f = {100, 200, 300, 400};
    std::cout << "f: ";
    for (size_t i = 0; i < f.size(); ++i) std::cout << f[i] << (i+1 < f.size() ? " " : "\n");
*/
    return 0;
}
// ...existing code...