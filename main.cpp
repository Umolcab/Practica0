#include <iostream>
#include "BrazoRobotico.h"

int main(){
	BrazoRobotico brazo1(12.3,4.6,22.4,false);
	try{
		brazo1.mover(14.6,30.5,2.4);
		std::cout << "Se ha movido el brazo correctamente a las coordenadas: " << brazo1.getX() << "," << brazo1.getY() << "," << brazo1.getZ() << std::endl;
		brazo1.coger();
		if(brazo1.getObjeto()){
			std::cout << "Se ha cogido correctamente el objeto" << std::endl;
		}
	}catch(std::runtime_error e){
		std::cout << e.what() << std::endl;
	}

	return 0;
}

