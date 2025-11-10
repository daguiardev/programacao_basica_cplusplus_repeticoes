#include <iostream>
using namespace std;

/*
A professora pediu que os alunos copiem 100 vezes a frase 
“Não vou conversar durante a aula”. 
Elabore um programa que repita esta frase 100 vezes.
*/
int main(){
    int contador = 0;
    
    do {
         cout << "Não vou conversar durante a aula" << endl;
         contador++;
    } while (contador < 100);
}