#include <iostream>
#include "televisao.h"

Televisao::Televisao(int c, int v){
	c = 0;
	v = 0;
}

void Televisao::setVolume(int v){
	if(v < 0){
		cout << "Volume minimo" << endl;
	}else if(v > 100){
			cout << "Volume no maximo" << endl;
		}else{
			volume = v;
		}
}

void Televisao::setCanal(int c){
	if(c < 0){
		cout << "Canal Inexistente" << endl;
	}else if(c > 100){
			cout << "Canal Inexistente" << endl;	
	}else{
			canal = c;
		}
}

int Televisao::getVolume(){
	return volume;
}

int Televisao::getCanal(){
	return canal;
}
