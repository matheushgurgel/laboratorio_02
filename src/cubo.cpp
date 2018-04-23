#include "cubo.h"
Cubo::Cubo(double lado_):
	m_nome("None"),m_lado(lado_){
}

Cubo::~Cubo(){

}

double
Cubo::calcularArea(){
	m_area = 6*pow(m_lado,2);
	return m_area;
}

double
Cubo::calcularVolume(){
	m_volume = pow(m_lado,3);
	return m_volume;
}

double
Cubo::getArea(){
	return m_area;
}

double
Cubo::getVolume(){
	return m_volume;
}