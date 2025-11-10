#include <iostream>
using namespace std;

/*
O relógio da escola faz contagem regressiva de 10 até 1 
para avisar que o recreio vai começar. 
Elabore um programa que mostre os números de 10 até 1.
*/
int main(){
    int contador = 10;

    while (contador > 0){
        cout << contador << endl;
        contador = contador - 1;
    }
}