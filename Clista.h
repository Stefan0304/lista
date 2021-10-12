#pragma once
#include <cstddef>
#include <iostream>
using namespace std;
class Clista
{
	struct celula {
		double data;
		celula* urm;
	} *prim, * ultim;
public:
	Clista() {
		prim = ultim = NULL;
	}
	~Clista() { //functia de stergere element in destructor :)
		celula* p = prim;
		while (p)
		{
			cout << "\n Elimin pe " << p->data;
			prim = p->urm;
			delete p;
			p = prim;
		}
	}
	void AdaugInc(double);
	void List();
};

