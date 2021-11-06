#include "pch.h"
#include "Tableau.h"
namespace inter {
	Tableau::Tableau(unsigned int t)
	{
		this->taille = t;
		this->T = new double[t];
		for (int i = 0; i < t; i++) {
			T[i] = 0;
		}
	}
	Tableau::Tableau(const Tableau& t)
	{
		this->taille = t.taille;
		if (this->T) {
			delete[] this->T;
			this->T = nullptr;
		}
		this->T = new double[this->taille];
		for (int i = 0; i < this->taille; i++) {
			this->T[i] = t.T[i];
		}
	}
	Tableau& Tableau::operator=(const Tableau& t)
	{
		// TODO: insert return statement here
		if (this != &t) {
			this->taille = t.taille;
			if (this->T) {
				delete[] this->T;
				this->T = nullptr;
			}
			this->T = new double[this->taille];
			for (int i = 0; i < this->taille; i++) {
				this->T[i] = t.T[i];
			}
		}
		return *this;
	}
	double& Tableau::operator[](const unsigned int i)const
	{
		// TODO: insert return statement here
		try {
			if ( i >= this->taille) throw "indice non valide";
			if (!this->T)	throw "tableau inexistant";
			return this->T[i];
		}
		catch (string e) {
			cout << e << endl;
		}

	}
	void Tableau::print() const
	{
		for (int i = 0; i < this->taille; i++) {
			cout << T[i] << "->";
		}
		cout << endl;
	}
	Tableau::~Tableau()
	{
		delete[] T;
		T = nullptr;

	}
}
