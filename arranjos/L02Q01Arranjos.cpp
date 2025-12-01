#include <iostream>
using namespace std;

int main (){

	int numeros[10];
	
	int indice = 0;
	while (indice < 10){
		cin >> numeros[indice];
		indice = indice + 1;
    }

    indice = 0;
    int quantPares = 0;
    while (indice < 10){
        if (numeros[indice] % 2 == 0){
            quantPares = quantPares + 1;
        }		
        indice = indice + 1;
    }

    int numeros_pares[quantPares];

	indice = 0;
    int indice_pares = 0;
    while (indice < 10){
        if (numeros[indice] % 2 == 0){
            numeros_pares[indice_pares] = numeros[indice];
            indice_pares = indice_pares + 1;
        }		
        indice = indice + 1;
    }

    indice = 0;
    cout << "Primeiro arranjo: ";
    while (indice < 10){
        cout << numeros[indice] << " - ";		
        indice = indice + 1;
    }

    indice_pares = 0;
    cout << "\nSegundo arranjo (apenas os números pares): ";
    while (indice_pares < quantPares){
        cout << numeros_pares[indice_pares] << " - ";	
        indice_pares = indice_pares + 1;
    }

    return 0;

}
