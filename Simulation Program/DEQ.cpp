#include "DEQ.h"

bool DEQ::DEQisEmpty(){
	if (length == 0)
		return true;
	else return false;
}

void DEQ::addFront(Airplane* airplane){
	if (DEQisEmpty()){
		front=rear=airplane;
		airplane->setNext(NULL);
	}
	else {
		airplane->setNext(front);
		front=airplane;
	}
	length++;	
}

Airplane DEQ::removeFront(){ //?
	if(DEQisEmpty())
		cout << "No airplanes currently" << endl;
	else {
		Airplane temp = *front;
		front = front->getNext();
		delete front;
		length--;
		return temp; //return last item 
	}
}

void DEQ::addRear(Airplane* airplane){
	if (DEQisEmpty()){
		front=rear=airplane;
	}
	else {
		rear->setNext(airplane);
		rear=airplane;
	}
	length++;
}

Airplane DEQ::removeRear(){ //?
	//Y! this is going to create an issue because we want to return a pointer to an airplane, but we also want to delete it
	Airplane* temp;
	Airplane* temp1;
	Airplane sendback;
	if(DEQisEmpty())
		cout << "No airplanes currently" << endl;
	else if(front->getNext() == NULL) {
		sendback = *front;
		//Y! after deleting front temp should be pointing at nothing
		delete front;
		front = NULL;
		length--;
		return sendback;
	}
	else{
		temp=front;
		temp1 = temp;
		while(temp->getNext() != NULL) {
			temp1=temp;
			temp=temp->getNext();
		}
		sendback = *temp;
		delete temp;
		temp1->setNext(NULL);
		length--;
		return sendback;
	}

}

Airplane* DEQ::viewFront(){
	if(DEQisEmpty())
		cout << "No airplanes currently" << endl;
	else
		return front; //-> airplane name ? 
}

Airplane* DEQ::viewRear(){
	if(DEQisEmpty())
		cout << "No airplanes currently" << endl;
	else
		return rear; //-> airplane name ? 
}
