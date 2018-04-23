#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <iostream>
using std::string;
#include "quadrado.h"
#include "triangulo.h"
#include <cmath>

class Piramide{
	private:
		string m_nome;
		double m_altura;
		double m_base;
		double m_volume;
		double m_area;
	public:
		Piramide(double altura_, double base_);
		~Piramide();

		double calcularArea();
		double calcularVolume();

		double getArea();
		double getVolume();
	
};
#endif