#include <iostream>
using namespace std;

int main (){

	string nomes[3];
	string telefones[3];
	string emails[3];

	int indice = 0;
	while (indice < 3){
		cout << "Digite o nome do contato:" << endl;
		cin >> nomes[indice];
		cout << "Digite o telefone do contato:" << endl;
		cin >> telefones[indice];
		cout << "Digite o e-mail do contato:" << endl;
		cin >> emails[indice];
		indice = indice + 1;

    }

    indice = 0;
    cout << "Lista de contatos cadastrados: " << endl;
    cout << "Nome\t" << "Telefone\t" << "E-mail\t" << endl;
        while (indice < 3){
            cout << nomes[indice] << "\t";
            cout << telefones[indice] << "\t";
            cout << emails[indice] << "\t" << endl;
            indice = indice + 1;
    }
}
