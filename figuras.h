#pragma once 

class figuras {
public:

	class esfera {
	private:
		float radio;
		float x;
		float y;
		unsigned char rojo;
		unsigned char verde;
		unsigned char azul;

	public:
		void setColor(unsigned char r, unsigned char v, unsigned char a);
		void setRadio(float r);
		void setPos(float ix, float iy);
		void dibuja();
		void mueve();
		void mueve_pinta(unsigned char key);
		float getRadio();
		void getPos(float &ix,float &iy);

	}esfera1, esfera2;

	//class toro {
	//private:
	//	float radioIn;
	//	float radioExt;
	//	float x;
	//	float y;
	//	unsigned char rojo;
	//	unsigned char verde;
	//	unsigned char azul;

	//public:
	//	void setProperties(float rIn, float rExt, float ix, float iy, unsigned char r, unsigned char v, unsigned char a);
	//	void dibujaT();

	//}toro1;

};