#pragma once 
#include "figuras.h"

class mundo {
public:
	class ojo {
	public:
		float x;
		float y;
		float z;
	}ojo;

	figuras::esfera esfera1;
	figuras::esfera esfera2;
	//figuras::toro toro1;

	void inicializa();
	void rotarOjo();
	void dibujar();
	void mueve();
	void tecla(unsigned char key);
};
