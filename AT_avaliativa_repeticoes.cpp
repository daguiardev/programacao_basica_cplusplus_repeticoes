#include <iostream>
using namespace std;

/*
Você precisa codificar um programa que processará dois cálculos:
(i)	O programa deverá mostrar na tela um menu de operações (que se repete até que a opção 0 seja digitada) conforme o exemplo:
Bem-vindo a minha máquina de cálculos
Selecione uma das opções a seguir:
1 – Cálculo da potência de um número n;
2 – Cálculo da média ponderada de n números;
3 – Mostre os números de 0 a 50 e de 50 a 0 utilizando uma única repetição;
0 –  Sair
(ii)	Ao selecionar a opção (1), o programa deverá calcular o quadrado de um número n 
a partir da soma dos n primeiros números ímpares. Por exemplo, 3² = 1 + 3 + 5.
(iii)	Ao selecionar a opção (2), o programa deverá calcular a média ponderada de n números 
e n pesos fornecidos pelo usuário. Por exemplo, se o usuário indicar que deseja calcular a média ponderada de 3 números, seu programa deverá ler 3 números, 3 pesos e realizar o cálculo dessa média ponderada: (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3).
(iv)	Validem/tratem entradas inválidas.

*/
int main(){
    int op = 0;
    do {

        cout << "Bem-vindo a minha máquina de cálculos" << endl;
        cout << "Selecione uma das opções a seguir:" << endl;
        cout << "1 – Cálculo da potência de um número n;" << endl;
        cout << "2 – Cálculo da média ponderada de n números;" << endl;
        cout << "3 – Mostre os números de 0 a 50 e de 50 a 0 utilizando uma única repetição;" << endl;
        cout << "0 –  Sair" << endl;

        cin >> op;

        while (op < 0 || op > 3){
            cout << "Opção escolhida inválida. Informe uma opção de acordo com o menu." << endl;
            cin >> op;
        }

        if (op == 1){
            int n = 0;
            cout << "Cálculo da potência (quadrada) de um número n." << endl;
            cout << "Informe o número n para calcular o seu quadrado: " << endl;
            cin >> n;

            int contador = 0;
            int impar = 1;
            int quadrado_de_n = 0;
            while (contador < n){
                quadrado_de_n = quadrado_de_n + impar;
                impar = impar + 2;
                contador = contador + 1;
            }
            cout << "O quadrado de n é: " << quadrado_de_n << endl;
        } else if (op == 2){
            int n = 0;
            cout << "Cálculo da média ponderada de n números." << endl;
            cout << "Informe a quantidade de números para calcular a média ponderada: " << endl;
            cin >> n;

            while (n <= 0)
            {
                cout << "Opção escolhida inválida. Uma quantidade de números maior que zero." << endl;
                cin >> n;
            }
            
            int contador = 0;
            float soma_prod = 0;
            float soma_pesos = 0;
            float media_ponderada = 0;
            while (contador < n){
                cout << "Informe um número: " << endl;
                float num = 0;
                cin >> num;
                cout << "Informe o peso deste número: " << endl;
                float peso = 0;
                cin >> peso;

                if (num < 0 || peso <= 0) {
                    cout << "Opção escolhida inválida. Informe números e pesos maiores do que zero." << endl;
                } else {
                    soma_pesos = soma_pesos + peso;
                    soma_prod = soma_prod + num*peso;
                    contador = contador + 1;
                }  
            }

            media_ponderada = soma_prod/soma_pesos;

            cout << "A média ponderada destes números é: " << media_ponderada << endl;
        } else if(op == 3) {
            cout << "Números em ordem crescente e decrescente com a mesma estruturura de repetição" << endl;
            int contador = 0;
            while (contador < 51){
                cout << contador << " - " << 50 - contador << endl;
                contador = contador + 1;
            }
        } else {
            cout << " Programa encerrado com sucesso." << endl;
        }
    } while (op != 0);


}