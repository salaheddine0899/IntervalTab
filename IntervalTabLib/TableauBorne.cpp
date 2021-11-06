#include "pch.h"
#include "TableauBorne.h"

namespace inter {

	TableauBorne::TableauBorne(unsigned int t, double min, double max) :Tableau(t)
	{
		this->min = min;
		this->max = max;
	}
	double TableauBorne::operator[](unsigned int i)
	{
		try
		{
			if (i >= this->taille) throw "indice non valide";
			if (!this->T)	throw "tableau inexistant";
			return this->T[i];
		}
		catch (string e)
		{
			cout << e << endl;
		}
	}
	void TableauBorne::operator()(unsigned int i, double val)
	{
		try
		{
			if (i >= this->taille) throw "indice non valide";
			if (!this->T)	throw "tableau inexistant";
			if (val<this->min || val>this->max)	throw "hors de l'interval";
			this->T[i] = val;
		}
		catch (string e)
		{
			cout << e << endl;
		}
	}
}
