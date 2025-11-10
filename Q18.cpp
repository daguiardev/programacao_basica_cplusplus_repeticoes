#include <iostream>
using namespace std;

/*
*
* Questão 18: Elabore um programa que solicita um número inteiro e mostre sua tabuada até 10.
*
*/
int main(){
    cout << "Cálculo da tabuada de um número inteiro." <<endl;
    cout << "Digite um número inteiro: " <<endl;

    int numero = 0;
    cin >> numero;

    int contador = 1;
    
    cout << "A tabuda de " << numero <<  " é: \n";
    while (contador < 11)
    {
        cout << contador << " x " << numero << " = " <<  contador*numero << endl;
        contador = contador + 1;
    }
    
}