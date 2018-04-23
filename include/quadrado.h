#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
using std::string;
#include <cmath>

class Quadrado{
	private:
		string m_nome;
		double m_lado;
		double m_perimetro;
		double m_area;
	public:
		Quadrado(double lado_);
		~Quadrado();

		double calcularArea();
		double calcularPerimetro();

		double getArea();
		double getPerimetro();
	
};
#endif