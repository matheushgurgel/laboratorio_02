#ifndef ESFERA_H
#define ESFERA_H

#include <iostream>
using std::string;
#define PI 3.1415
#include <cmath>

class Esfera{
	private:
		string m_nome;
		double m_raio;
		double m_volume;
		double m_area;
	public:
		Esfera(double raio_);
		~Esfera();

		double calcularArea();
		double calcularVolume();

		double getArea();
		double getVolume();
	
};
#endif