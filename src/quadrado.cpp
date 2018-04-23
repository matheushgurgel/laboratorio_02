#include "quadrado.h"
Quadrado::Quadrado(double lado_):
	m_nome("None"),m_lado(lado_){
}

Quadrado::~Quadrado(){

}

double
Quadrado::calcularArea(){
	m_area = pow(m_lado,2);
	return m_area;
}

double
Quadrado::calcularPerimetro(){
	m_perimetro = 4*m_lado;
	return m_perimetro;
}

double
Quadrado::getArea(){
	return m_area;
}

double
Quadrado::getPerimetro(){
	return m_perimetro;
}