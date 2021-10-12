#include "Clista.h"

void Clista::AdaugInc(double x)
{
	celula* p = new celula;
	p->data = x;
	p->urm = prim;
	prim = p;
}

void Clista::List()
{
	celula* p = prim;
	cout << "\n Lista contine elementele: ";
	while (p)
	{
		cout << p->data << " ";
		p = p->urm;

	}
}