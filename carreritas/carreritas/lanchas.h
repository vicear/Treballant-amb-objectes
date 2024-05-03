#pragma once

#include <iostream>
class Lancha //CREACIÓN DE LA CLASE
{
private:
	int velocidad;
	std::string name;
	int distRecorrida;
	int nitro;
public:
	//constructores
	Lancha(int pVelocidad, std::string pName, int pDistRecorrida, int pNitro);
	Lancha();
	
	//getters
	int getVelocidad();
	std::string getName();
	int getDistRecorrida();
	
	
	//setters
	void setVelocidad(int pvelocidad);
	void setName(std::string pname);
	void setDistRecorrida(int pdistRecorrida);
	void setNitro(int pvelocidad);
	int getNitro();
	
	//metodos propios
	void printStatus();
	int throwDice();
	void calculateDistance(int pdistRecorrida, int velocidad);
	void calculateSpeed(int pDice);
	void calcularNitro();
	


};
