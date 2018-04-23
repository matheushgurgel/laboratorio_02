#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
using std::string;
#define PI 3.1415
#include <cmath>

class Circulo{
	private:
		string m_nome;
		double m_raio;
		double m_perimetro;
		double m_area;
	public:
		Circulo(double raio_);
		~Circulo();

		double calcularArea();
		double calcularPerimetro();

		double getArea();
		double getPerimetro();
	
};
#endif