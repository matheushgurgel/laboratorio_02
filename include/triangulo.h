#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
using std::string;

class Triangulo{
	private:
		string m_nome;
		double m_altura;
		double m_base;
		double m_perimetro;
		double m_area;
	public:
		Triangulo(double altura_, double base_);
		~Triangulo();

		double calcularArea();
		double calcularPerimetro();

		double getArea();
		double getPerimetro();
	
};
#endif