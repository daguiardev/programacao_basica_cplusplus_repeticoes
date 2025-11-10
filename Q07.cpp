#include <iostream>
using namespace std;

/*
*
* Um aluno fez 3 provas. 
Crie um programa que leia as notas usando while e calcule 
a média aritmética destas notas.
*
*/
int main(){
    
    int contador = 1;
    float nota, soma = 0, media = 0;
    while (contador < 4)
    {
        cout << "Informe a " << contador << "ª nota: " <<endl;
        cin >> nota;
        soma = soma + nota;
        contador = contador + 1;
    }
    media = soma / 3;
    cout << "A média das três notas é: " << media << endl;
}