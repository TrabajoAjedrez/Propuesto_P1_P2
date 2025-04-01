#pragma once //El archivo de cabecera solo se incluye una vez en el proceso de compilaciom

#include "freeglut.h"
#include "figuras.h"



//Los :: se usan para acceder a la clase
void figuras::esfera::setColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}

void figuras::esfera::setRadio(float r) {

	if (r < 0.1) {
		r = 0.1;
	}
	else
	{
		radio = r;
	}
}


void figuras::esfera::setPos(float ix, float iy)
{
	x = ix;
	y = iy;
}

//void figuras::toro::setProperties(float rIn, float rExt, float ix, float iy, unsigned char r, unsigned char v, unsigned char a)
//{
//	radioIn = rIn;
//	radioExt = rExt;
//	x = ix;
//	y = iy;
//	rojo = r;
//	verde = v;
//	azul = a;
//}

//void figuras::toro::dibujaT() 
//{
//	glColor3ub(rojo, verde, azul);
//	glTranslatef(x, y, 0);
//	glutSolidTorus(radioIn,radioExt, 20, 20);
//	glTranslatef(-x, -y, 0);
//}

void figuras::esfera::dibuja()
{
	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex3f(-5.0f, 0.0f, -5.0f);
	glVertex3f(-5.0f, 0.0f, 5.0f);
	glColor3ub(255, 255, 255);
	glVertex3f(5.0f, 0.0f, 5.0f);
	glColor3ub(0, 255, 255);
	glVertex3f(5.0f, 0.0f, -5.0f);
	glEnd();

	glColor3ub(rojo, verde, azul);
	glTranslatef(x, y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-x, -y, 0);
}

void figuras::esfera::mueve()
{
	radio += 0.1f;
	if (radio > 3)
		radio = 0.5f;
}

	
float figuras::esfera::getRadio()
{
	return radio;
}

void figuras::esfera::getPos(float& ix, float& iy)
{
	ix = x;
	iy = y;
}

void figuras::esfera::mueve_pinta(unsigned char key) {

	if (key == 'a') //izq, X negativo
		 x-= 0.1f;
	if (key == 'd') //der, X positivo
		x += 0.1f;
	if (key == 'w') //arriba, Y positivo
		y += 0.1f;
	if (key == 's') //abajo, Y negativo
		y -= 0.1f;
	if (key == '+' && radio < 3) //Aumenta el radio si se pula la tecla +
	radio += 0.5f;
	if (key == '-' && radio > 1)
	radio -= 0.5f;
	if (key == 'v') //Dibuja la esfera rojo si pulsa r
	setColor(0, 255, 0);
	if (key == 'r') //Dibuja la esfera rojo si pulsa r
	setColor(255, 0, 0);
}

