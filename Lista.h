#pragma once
#include "Nodo.h"

class Lista : public Nodo{
protected:
	int pos;
public:
	void add();
	void cut();
	void show();
	void check();
	void file();
};

