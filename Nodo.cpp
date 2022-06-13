#include "Nodo.h"

void Nodo::addToList(Nodo *&lista, string d) { //se modificó stirng dato
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->dato = d; //se agregó el "= d"

	Nodo* aux1 = lista;
	Nodo* aux2 = nullptr;//se inicializó como nullptr

	while ((aux1 != NULL)&&(aux1->dato < d)) { //se agregaron cosas a la funcion
		aux2 = aux1;
		aux1 = aux1->sig;
	}
	if (lista == aux1) {
		lista = nuevoNodo;
	}
	else { //se agregó el else
		aux2->sig = nuevoNodo;
	}
	nuevoNodo->sig = aux1;
	cout << "El elemento '" << d << "' se agrego a la lista correctamente" << endl;
}

void Nodo::showList(Nodo* lista) {
	Nodo* actual = new Nodo;
    actual = lista;
	
	while (actual != NULL){
	    cout << actual->dato << endl;
	    actual = actual->sig;
	}
}

void Nodo::deleteFromList(Nodo*& lista, string d) {
	if (lista != NULL) {//preguntar si la lista está vacia
		Nodo* auxBorrar;
		Nodo* anterior = NULL;
		auxBorrar = lista;

		while ((auxBorrar != NULL) && (auxBorrar->dato != d)) {//recorrer la lista
			anterior = auxBorrar;
			auxBorrar = auxBorrar->sig;
		}
		if (auxBorrar == NULL) { //si el elemento no se encuentra
			cout << "El elemento '" << d << "' no ha sido encontrado" << endl;
			system("pause");
			system("cls");
		}
		else if (anterior == NULL) {
			lista = lista->sig;
			delete auxBorrar;
			cout << endl << "Elemento '" << d << "' ha sido elimiado de la lista" << endl;
			system("pause");
			system("cls");
		}
		else { //elemento en lista pero no es el 1º nodo
			anterior->sig = auxBorrar->sig;
			delete auxBorrar;
			cout << "Elemento '" << d << "' ha sido elimiado de la lista" << endl;
			system("pause");
			system("cls");
		}
	}
}

void Nodo::checkNodo(Nodo*& lista, string d) {
	string terminado = "<----TERMINADO";
	Nodo* actual = new Nodo();
	actual = lista;
	bool found = false;
	dato = d;
	if (lista != NULL) {
		while ((actual != NULL) && (found != true)) {
			if (actual->dato == d) {
				cout << "Elemento '" << dato << "' encontrado" << endl;
				cout << "Escriba 'TERMINADO' para marcarlo como terminado: ";
				cin >> actual->dato;
					found = true;
			}
				actual = actual->sig;
		}
		if (!found) {
			cout << "No se encontró ese elemento en la lista";
		}
	}
}

void Nodo::sendToFile(Nodo* lista) {
	ofstream file;
	string fileName;
	cout << "Ingrese el nombre o ubicacion del archivo:\t";
	cin >> fileName;

	if (file.fail()) {
		cout << "ERROR AL CREAR EL ARCHIVO";
		exit(1);
	}
	file.open(fileName, ios::out);
	Nodo* actual = new Nodo;
	actual = lista;
	file << "----------LISTA----------" << endl;
	while (actual != NULL) {
		file << actual->dato << endl;
		actual = actual->sig;
	}
	file << "-------------------------" << endl;
	file.close();
}