#include "triangulo.h"
Triangulo::Triangulo(double altura_, double base_):
	m_nome("None"),m_altura(altura_),m_base(base_){
}

Triangulo::~Triangulo(){

}

double
Triangulo::calcularArea(){
	m_area = (m_base*m_altura)/2;
	return m_area;
}

double
Triangulo::calcularPerimetro(){
	m_perimetro = 3*m_base;
	return m_perimetro;
}

double
Triangulo::getArea(){
	return m_area;
}

double
Triangulo::getPerimetro(){
	return m_perimetro;
}