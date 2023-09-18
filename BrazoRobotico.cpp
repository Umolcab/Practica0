#include "BrazoRobotico.h"
#include <stdexcept>

void BrazoRobotico::BrazoRobotico(double x, double y, double z, bool objeto){
	this->x = x;
	this->y = y;
	this->z = z;
	this->objeto = objeto;
}

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
	return y;
}

double BrazoRobotico::getZ(){
	return z;
}

bool BrazoRobotico::getObjeto(){
	return objeto;
}

void BrazoRobotico::coger(){
	if(objeto){
		throw runtime_error("No se puede coger un objeto");
	}else{
		objeto = true;
	}
}

void BrazoRobotico::soltar(){
	if(!objeto){
		throw runtime_error("No hay ningun objeto que soltar");
	}else{
		objeto = false;
	}
}

void BrazoRobotico::mover(double newX, double newY, double newZ){
	x = newX;
	y = newY;
	z = newZ;
}

