#include <iostream>

#include "circulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "triangulo.h"
#include "cubo.h"
#include "piramide.h"
#include "esfera.h"
#include "paralepipedo.h"

#include <stdlib.h> 
#include <string.h>

using namespace std;
int main(int argc, char const *argv[])
{
	if (strcmp(argv[1],"triangulo")==0)
	{
		Triangulo m_tri(atof(argv[2]),atof(argv[3]));
		cout<<"Area do triagulo: "<< m_tri.calcularArea()<<endl;
		cout<<"Perimetro do triagulo: "<< m_tri.calcularPerimetro()<<endl;

	}else if (strcmp(argv[1],"retangulo")==0)
	{
		Retangulo m_ret(atof(argv[2]),atof(argv[3]));
		cout<<"Area do retangulo: "<< m_ret.calcularArea()<<endl;
		cout<<"Perimetro do retangulo: "<< m_ret.calcularPerimetro()<<endl;
	}else if (strcmp(argv[1],"quadrado")==0)
	{
		Quadrado m_qua(atof(argv[2]));
		cout<<"Area do quadrado: "<< m_qua.calcularArea()<<endl;
		cout<<"Perimetro do quadrado: "<< m_qua.calcularPerimetro()<<endl;			
	}else if (strcmp(argv[1],"circulo")==0)
	{
		Circulo m_cir(atof(argv[2]));
		cout<<"Area do circulo: "<< m_cir.calcularArea()<<endl;
		cout<<"Perimetro do circulo: "<< m_cir.calcularPerimetro()<<endl;
	}else if (strcmp(argv[1],"piramide")==0)
	{
		Piramide m_pir(atof(argv[2]),atof(argv[3]));
		cout<<"Area da piramide: "<< m_pir.calcularArea()<<endl;
		cout<<"Volume da piramide: "<< m_pir.calcularVolume()<<endl;
	}else if (strcmp(argv[1],"cubo")==0)
	{
		Cubo m_cub(atof(argv[2]));
		cout<<"Area do cubo: "<< m_cub.calcularArea()<<endl;
		cout<<"Volume do cubo: "<< m_cub.calcularVolume()<<endl;			
	}else if (strcmp(argv[1],"paralepipedo")==0)
	{
		Paralepipedo m_par(atof(argv[2]),atof(argv[3]),atof(argv[4]));
		cout<<"Area do paralepipedo: "<< m_par.calcularArea()<<endl;
		cout<<"Volume do paralepipedo: "<< m_par.calcularVolume()<<endl;			
	}else if (strcmp(argv[1],"esfera")==0)
	{
		Esfera m_esf(atof(argv[2]));
		cout<<"Area da esfera: "<< m_esf.calcularArea()<<endl;
		cout<<"Volume da esfera: "<< m_esf.calcularVolume()<<endl;
	}else
	{
		cout << "\n Opcao invalida!"<<endl;
	};

	return 0;
}
