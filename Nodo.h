#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Nodo{
protected:
	Nodo* lista = NULL;
	string dato;
	Nodo* sig;
public:
	void addToList(Nodo *&, string );
	void showList(Nodo*);
	void deleteFromList(Nodo*&, string);
	void checkNodo(Nodo*&, string);
	void sendToFile(Nodo*);
};

