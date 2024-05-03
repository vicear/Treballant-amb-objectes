#pragma once
#include "lanchas.h"
#include <iostream>
//rand
#include <cstdlib>
#include <ctime>
//TODOS LOS MÉTODOS Y EL CONSTRUCCIÓN TIENEN QUE HACER REFERENCIA A LA 
//CLASE, EN ESTE CASO, A ENEMIGO
//constructor
Lancha::Lancha(int pVelocidad, std::string pName, int pdistRecorrida, int pNitro) {
	velocidad = pVelocidad;
	name = pName;
	distRecorrida = pdistRecorrida;
	nitro = pNitro;
}

Lancha::Lancha() {
}

//getters
int Lancha::getVelocidad() {
	return velocidad;
}
std::string Lancha::getName() {
	return name;
}
int Lancha::getDistRecorrida() {
	return distRecorrida;
}
int Lancha::getNitro() {
	return nitro;
}
//setters
void Lancha::setVelocidad(int pvelocidad) {
	velocidad = pvelocidad;
}
void Lancha::setName(std::string pname) {
	name = pname;
}


//Metodos propios
void Lancha::printStatus() {
	std::cout << "El nombre del enemigo es " << getName() <<  std::endl;
}


void Lancha::calculateSpeed(int pDice) {
	velocidad = velocidad + pDice;
}

void Lancha::calculateDistance(int pdistRecorrida, int velocidad) {
	
	distRecorrida = pdistRecorrida + velocidad * 100;
}



void Lancha::setNitro(int pNitro) {
	nitro = pNitro;
	
	

}

void Lancha::calcularNitro() {
	srand(time(NULL));
		int probNitro = rand() % 2+1;

		if (probNitro == 1)
		{
			std::cout << "Has utilizado el nitro correctamente tu velocidad se multiplicara por 2\n";
			velocidad = velocidad * 2;

		}
		else 

		{
			std::cout << "Has fallado el nitro tu velocidad se dividira en 2\n";
			velocidad = velocidad / 2;
		}

		nitro = nitro - 1;
	
}

int Lancha::throwDice() {

	
	return rand() % 6 + 1;
}