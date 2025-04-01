#pragma once

#include "freeglut.h"
#include "figuras.h"
#include "mundo.h"
#include <math.h>

void mundo::rotarOjo()
{ 
	float angle = atan(mundo::ojo.z / mundo::ojo.x);

	// Actualiza el ángulo de rotación
	angle += 0.01f;

	// Actualiza la posición de la cámara
	mundo::ojo.x = 20 * cos(angle);
	mundo::ojo.z = 20 * sin(angle);
}

void mundo::inicializa()
{
	esfera1.setColor(0, 0, 255);
	esfera1.setRadio(1.5);
	esfera1.setPos(-3.0, 0.0);

	esfera2.setColor(255, 255, 0);
	esfera2.setRadio(1.0);
	esfera2.setPos(0.0, -3.0);

	//toro1.setProperties(1.0, 5.0, 0.0, 0.0, 0, 255, 0);

	ojo.x = 0.0f;
	ojo.y = 10.0f;
	ojo.z = 20.0f;
}

void mundo::dibujar() {

	gluLookAt(mundo::ojo.x, mundo::ojo.y, mundo::ojo.z,  // posicion del ojo
		0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)

	esfera1.dibuja();
	esfera2.dibuja();
	//toro1.dibujaT();
}

void mundo::mueve()
{
	mundo::rotarOjo();
	esfera1.mueve();
}

void mundo::tecla(unsigned char key) 
{
	esfera2.mueve_pinta(key);
}