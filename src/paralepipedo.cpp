#include "paralepipedo.h"
Paralepipedo::Paralepipedo(double aresta1_, double aresta2_, double aresta3_):
	m_nome("None"),m_aresta1(aresta1_),m_aresta2(aresta2_),m_aresta3(aresta3_){
}

Paralepipedo::~Paralepipedo(){

}

double
Paralepipedo::calcularArea(){
	m_area = (2*m_aresta1*m_aresta2)+(2*m_aresta1*m_aresta3)+(2*m_aresta2*m_aresta3);
	return m_area;
}

double
Paralepipedo::calcularVolume(){
	m_volume = m_aresta1*m_aresta2*m_aresta3;
	return m_volume;
}

double
Paralepipedo::getArea(){
	return m_area;
}

double
Paralepipedo::getVolume(){
	return m_volume;
}