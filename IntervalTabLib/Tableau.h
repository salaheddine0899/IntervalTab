#pragma once
#include <iostream>
using namespace std;
namespace inter{
	class Tableau
	{
	protected: 
		unsigned int taille;
		double* T=nullptr;
		double& operator[](const unsigned int i)const;
	public:
		Tableau(unsigned int t);
		Tableau(const Tableau& t);
		Tableau& operator=(const Tableau& t);
		void print() const;
		~Tableau();
	};
}
