#ifndef PARALEPIPEDO_H
#define PARALEPIPEDO_H

#include <iostream>
using std::string;
#include <cmath>

class Paralepipedo{
	private:
		string m_nome;
		double m_aresta1,m_aresta2,m_aresta3;
		double m_volume;
		double m_area;
	public:
		Paralepipedo(double aresta1_, double aresta2_, double aresta3_);
		~Paralepipedo();

		double calcularArea();
		double calcularVolume();

		double getArea();
		double getVolume();
	
};
#endif