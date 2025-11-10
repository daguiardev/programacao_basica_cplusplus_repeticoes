#include <iostream>
using namespace std;

/*
*
* Questão 06: Elabore um programa que mostre os números pares de 0 a 1000.
*
*/
int main(){
    cout << "Os números pares de 0 a 1000 são: " <<endl;
    int contador = 0;
    while (contador < 1001)
    {
        cout << contador << endl;
        contador = contador + 2;
    }
}