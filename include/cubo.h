#ifndef CUBO_H
#define CUBO_H

#include <iostream>
using std::string;
#include <cmath>

class Cubo{
	private:
		string m_nome;
		double m_lado;
		double m_volume;
		double m_area;
	public:
		Cubo(double lado_);
		~Cubo();

		double calcularArea();
		double calcularVolume();

		double getArea();
		double getVolume();
	
};
#endif