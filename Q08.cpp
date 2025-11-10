#include <iostream>
using namespace std;

/*
*
* Elabore um programa que solicite ao usuário um número inteiro 
e mostre todos os números de 1 até o número fornecido.
*
*/
int main(){
    
    int contador = 1;
    int numero;
    
    cout << "Informe um número inteiro: " <<endl;
    cin >> numero;

    while (contador <= numero)
    {
        cout << contador <<endl;
        contador = contador + 1;
    }
}