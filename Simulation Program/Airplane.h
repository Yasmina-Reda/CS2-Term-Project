#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

// Enumeration to represent the possible destinations
//enum  class Country{Egypt, Kuwait, Saudia_Arabia, UAE };

class Airplane{

// Define a struct for an airplane
//Y: changed it to a class
private:
    string departure;   // The departure country or airport
    int passengerNum;   // The number of passengers on the airplane
    string id;          // The unique identifier for the airplane
    string waittime;    // The estimated wait time before landing
    string arrivaltime; // The estimated arrival time
    Airplane* next=NULL;     // A pointer to the next airplane in a linked list
    bool urgent;        // Whether the airplane has an urgent status
public:
    // Default constructor
    Airplane();

    // Destructor
    ~Airplane();

    // Setter function for the airplane's ID
    void setId(string id);

    // Getter function for the airplane's ID
    string getId();

    // Setter function for the airplane's departure country or airport
    void setDeparture(string country);

    // Getter function for the airplane's departure country or airport
    string getDeparture();

    // Setter function for the number of passengers on the airplane
    void setPassNum(int w);

    // Getter function for the number of passengers on the airplane
    int getPassNum();

    // Setter function for the pointer to the next airplane in a linked list
    void setNext(Airplane* n);

    // Getter function for the pointer to the next airplane in a linked list
    Airplane* getNext();
    
     // Setter for WaitTime
     void setWaitTime( string waittime);
    
    //Getter for WaitTime
     string getWaitTime();
        
    // Setter for ArrivalTime
    void setArrivalTime( string arrivaltime);
    
    //Getter ArrivalTime
    string getArrivalTime();
    

    // Getter function for the airplane's urgent status
    bool getUrgent();

    //Prints Airplane data
    void print();
};