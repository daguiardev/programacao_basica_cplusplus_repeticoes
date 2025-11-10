#include <iostream>
using namespace std;

/*
*
* Um professor só aceita notas entre 0 e 10. 
Faça um programa que repita até que o aluno digite um valor válido.
*
*/
int main(){
    
    int contador = 1;
    int nota;

    do{
        cout << "Informe uma nota entre 0 e 10: " <<endl;
        cin >> nota;
    } while (nota < 0 || nota > 10);
    cout << "Parabéns, vc digitou uma nota no intervalo correto." <<endl;
}