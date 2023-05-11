//Y: Added #pragma once to avoid class redefinition
#pragma once
#include <iostream>
#include "Airplane.h"
//Y: added the .cpp file for the compiler to run
#include "Airplane.cpp"
using namespace std;

class DEQ{
	private:
		Airplane* front;
		Airplane* rear;
		int length;
	public:
		DEQ(){front=rear=NULL; length=0;} //
		~DEQ();
		int getDEQLength();
		bool DEQisEmpty();//
		bool DEQisFull();//
		void addRear(Airplane* node);//anyone of front/rear
		void addFront(Airplane* node);//
		Airplane* removeFront();//
		Airplane* removeRear();//
		Airplane* viewFront();
		Airplane* viewRear();
		
};
