#include "retangulo.h"
Retangulo::Retangulo(double altura_, double base_):
	m_nome("None"),m_altura(altura_),m_base(base_){
}

Retangulo::~Retangulo(){

}

double
Retangulo::calcularArea(){
	m_area = (m_base*m_altura);
	return m_area;
}

double
Retangulo::calcularPerimetro(){
	m_perimetro = 2*(m_altura + m_base);
	return m_perimetro;
}

double
Retangulo::getArea(){
	return m_area;
}

double
Retangulo::getPerimetro(){
	return m_perimetro;
}