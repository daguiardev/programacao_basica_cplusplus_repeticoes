#include <iostream>
using namespace std;

/*
*
* Questão 21: Elabore um programa que leia um número inteiro e informe se ele é um número primo ou não.
*
*/
int main(){
    cout << "O número é primo ou não?" <<endl;
    cout << "Digite um número inteiro: " <<endl;

    int numero = 0;
    int flag = 0; // variável que vai verificar se o número é primo ou não. Zero = é primo, Um = não é primo.
    cin >> numero;

    float limite = numero / 2;

    int contador = 2;
    
    // laço que vai de 2 até o número -1
    while (contador < limite)
    {
        if (numero % contador == 0){
            flag = 1;
        }
        contador = contador + 1;
    }
    
    if (flag == 0){
        cout << "O número é primo.";
    } else {
        cout << "O número não é primo.";
    }
}