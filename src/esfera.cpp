#include "esfera.h"
Esfera::Esfera(double raio_):
	m_nome("None"),m_raio(raio_){
}

Esfera::~Esfera(){

}

double
Esfera::calcularArea(){
	m_area = 4*PI*pow(m_raio,2);
	return m_area;
}

double
Esfera::calcularVolume(){
	m_volume = (4*PI*pow(m_raio,3))/3;
	return m_volume;
}

double
Esfera::getArea(){
	return m_area;
}

double
Esfera::getVolume(){
	return m_volume;
}