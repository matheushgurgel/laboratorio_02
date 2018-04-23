#include "circulo.h"
Circulo::Circulo(double raio_):
	m_nome("None"),m_raio(raio_){
}

Circulo::~Circulo(){

}

double
Circulo::calcularArea(){
	m_area = PI*pow(m_raio,2);
	return m_area;
}

double
Circulo::calcularPerimetro(){
	m_perimetro = 2*PI*m_raio;
	return m_perimetro;
}

double
Circulo::getArea(){
	return m_area;
}

double
Circulo::getPerimetro(){
	return m_perimetro;
}