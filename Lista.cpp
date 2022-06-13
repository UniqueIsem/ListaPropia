#include "Lista.h"

void Lista::show() {
	system("cls");
	if(lista == NULL){
		cout << "La lista se encuentra vacia...agregue elementos" << endl;
	}
	else{
		cout << "----------LISTA----------" << endl;
        showList(lista);
		cout << "-------------------------" << endl;
	}
}

void Lista::add() {
	system("cls");
	int i= 0, c;
	cout << "Cuantos objetos desea agregar?\t";
	cin >> c;	
	system("cls");
	for (i = 0; i < c; i++){
		cout << "Ingrese el nombre del objeto " << i+1 << ":\t";
		cin >> dato;
		addToList(lista, dato);
		cout << endl;
	}
	system("pause");
	system("cls");
}

void Lista::cut() {
	system("cls");
	if (lista == NULL) {
		cout << "La lista se encuentra vacia";
	}
	show();
	cout << "Ingrese el nombre del elemento que desea eliminar:\t";
	cin >> dato;
	deleteFromList(lista, dato);
	cout << endl;
}

void Lista::check() {
	system("cls");
	if (lista == NULL) {
		cout << "La lista está vacia";
	}
	show();
	cout << "Escriba el nombre del elemento que desea marcar como terminado:\t";
	cin >> dato;
	checkNodo(lista, dato);
	system("cls");
}

void Lista::file() {
	system("cls");
	sendToFile(lista);
	cout << "La lista se ha enviado al archivo correctamente" << endl;
}