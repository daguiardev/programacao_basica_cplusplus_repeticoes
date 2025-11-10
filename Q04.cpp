#include <iostream>
using namespace std;

/*
Elabore um programa que peça ao usuário um número até que ele digite 12. 
Quando o usuário acertar, mostre na tela a mensagem: 
“Parabéns, você acertou!”.
*/
int main(){
    int numero = 0;
    
    do {
         cout << "Digite o número certo: ....";
         cin >> numero;
    } while (numero != 12);

    cout << "Parabéns, vc acertou!" << endl;
}