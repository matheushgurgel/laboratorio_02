#include "piramide.h"

Piramide::Piramide(double altura_, double base_):
	m_nome("None"),m_altura(altura_),m_base(base_){
}

Piramide::~Piramide(){

}

double
Piramide::calcularArea(){
	double altura;
	altura = sqrt(pow(m_altura,2)+pow(m_base/2,2));

	m_area = (pow(m_base,2)) + 4*((altura*m_base)/2);
	return m_area;
}

double
Piramide::calcularVolume(){
	m_volume = (pow(m_base,2)*m_altura)/3;
	return m_volume;
}

double
Piramide::getArea(){
	return m_area;
}

double
Piramide::getVolume(){
	return m_volume;
}