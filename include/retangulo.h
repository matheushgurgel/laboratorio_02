#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
using std::string;

class Retangulo{
	private:
		string m_nome;
		double m_altura;
		double m_base;
		double m_perimetro;
		double m_area;
	public:
		Retangulo(double altura_, double base_);
		~Retangulo();

		double calcularArea();
		double calcularPerimetro();

		double getArea();
		double getPerimetro();
	
};
#endif